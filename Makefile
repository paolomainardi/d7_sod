# PREPARING AN ENVIRONMENT FOR WEB APPLICATION BUILDING

is_ci =
regular_compose_file = docker-compose.yml

# Optional arguments coming from the `make` command.
KEEP_COMPOSE_FILE = false

# Normalize arguments.
env_norm1 = $(subst ci_,,$(ENV))
env_norm = $(shell echo "$(env_norm1)" | tr 'A-Z' 'a-z' | tr -d '[:punct:]')
prj_norm = $(shell echo "$(PRJ)" | tr 'A-Z' 'a-z' | tr -d '[:punct:]')
# Create temp directory name for data deployment.
temp = /tmp/buildapp.$(prj_norm)-$(env_norm)-$(shell date +"%s")
temp_backup_filename = $(shell date +"%s").tar

# Check required arguments.
ifndef PRJ
	PRJ = $(shell basename "${PWD}")
endif
ifndef ENV
	errormsg += You must specify a target environment using the "ENV" argument.
else
	is_ci = $(findstring ci_, $(ENV))
endif
ifndef VENDOR
	errormsg += You must specify a vendor using the "VENDOR" argument.
endif
ifndef VOLUMES
	VOLUMES = /var/lib/mysql /var/www/html/sites/default/files
endif
ifndef BACKUP_PATH_CI
	BACKUP_PATH_CI = /var/apps/backup-$(prj_norm)
endif
ifndef INTEGRATION
	INTEGRATION = 0
endif
ifndef DEPLOY
	DEPLOY = 1
endif

# Load variables for CI and non-CI environment.
ifneq ($(is_ci),)
	build_sys = ci
	ci_compose_template = docker-compose.ci.yml.template
	ci_compose_template_exists = $(wildcard $(ci_compose_template))
	ci_deploy_compose_file = docker-compose.ci.deploy.yml
	ifeq ($(ci_compose_template_exists),)
		errormsg += Missing template for CI docker-compose files.
	endif
	project_build_name = $(prj_norm)-$(env_norm)-build
	project_build_def = -p $(project_build_name)
	project_deploy_name = $(prj_norm)deploy
	project_deploy_def = -p $(project_deploy_name)
else
	build_sys = loc
	loc_compose_template = docker-compose.loc.yml.template
	loc_compose_template_exists = $(wildcard $(loc_compose_template))
	ifeq ($(loc_compose_template_exists),)
		errormsg += Missing template for Loc docker-compose file.
	endif
	project_build_name =
	project_build_def =
endif

# Main target.
all: checkreq startmsg create-docker-compose-loc create-docker-compose-ci create-build-environment import-data-ci build-app backup-data-ci create-deploy-environment
	@echo Making of project $(prj_norm) complete.

help:
	@echo '############################'
	@echo 'This tool allows to set-up a working, docker-based environment for development and testing of a PHP web application.'
	@echo
	@echo 'Usage: `make PRJ=projectname ENV=environmentname VENDOR=vendorname`'
	@echo 'Please use the "ci_" prefix for environment names in Continouous Integration.'
	@echo 'The PRJ, ENV and VENDOR arguments should be composed only of lowercase letters and numbers; any punctuation sign will be automatically removed.'
	@echo
	@echo 'Optional arguments:'
	@echo 'KEEP_COMPOSE_FILE - Do not generate a docker-compose file, keep the existing one.'
	@echo '############################'
	@echo

checkreq:
ifdef errormsg
	$(error ERRORS: $(errormsg))
endif
	@echo Checking if docker binaries exist...
	@docker --version
	@docker-compose --version
	@echo OK!
	@echo $(ci_build_compose_file_exists)

startmsg:
	@echo === MAKING AN ENVIRONMENT SUITABLE FOR BUILDING A WEB APPLICATION...

create-docker-compose-loc:
ifeq ($(build_sys),loc)
ifeq ($(KEEP_COMPOSE_FILE), false)
	@sed\
	  -e "s/%%ENV%%/$(ENV)/g"\
		-e "s/%%PROJECT%%/$(PRJ)/g"\
		-e "s/%%VENDOR%%/$(VENDOR)/g"\
		$(loc_compose_template)\
		> $(regular_compose_file)
	@echo "docker-compose file successfully created (loc)."
else
	@echo "Keeping the existing docker-compose file, as instructed."
endif
endif

create-docker-compose-ci:
ifeq ($(build_sys),ci)
ifeq ($(KEEP_COMPOSE_FILE), false)
	@sed\
		-e "s/%%ENV%%/$(env_norm)/g"\
		-e "s/%%PROJECT%%/$(prj_norm)/g"\
		-e "s/%%VENDOR%%/$(VENDOR)/g"\
		-e "/VIRTUAL_HOST/d"\
		$(ci_compose_template)\
		> $(regular_compose_file)
	@sed\
		-e "s/%%ENV%%/ci-$(env_norm)/g"\
		-e "s/%%PROJECT%%/$(prj_norm)/g"\
		-e "s/%%VENDOR%%/$(VENDOR)/g"\
		$(ci_compose_template)\
		> $(ci_deploy_compose_file)
	@echo "docker-compose files successfully created (ci)."

else
	@echo "Keeping the existing docker-compose file, as instructed."
endif
endif

create-build-environment:
	@echo "Cleaning up the build environment..."
	docker-compose $(project_build_def) stop
	docker-compose $(project_build_def) rm -vf
	@echo Building and starting-up containers...
	docker-compose $(project_build_def) pull
	docker-compose $(project_build_def) build
	docker-compose $(project_build_def) up -d data
	@echo Build environment $(env_norm) successfully created.

build-app:
	docker-compose $(project_build_def) up -d mysql
	@echo Timeout of 15 seconds to make database container start gracefully...
	@sleep 15
	docker-compose $(project_build_def) run --rm drupal /bin/bash -c "./build.sh ${VENDOR} ${PRJ} ${build_sys}"
	docker-compose $(project_build_def) up -d
	@echo Application successfully built.

destroy:
	docker-compose $(project_build_def) kill
	docker-compose $(project_build_def) rm -vf

backup-data:
	docker-compose $(project_build_def) stop
	docker run --rm --volumes-from $(prj_norm)_data_1 alpine tar jch $(VOLUMES) > backup-$(shell date +"%s").tar.bz2
	docker-compose $(project_build_def) up -d

backup-data-ci:
ifeq ($(build_sys),ci)
ifeq ($(env_norm),dev)
	@echo Backup $(env_norm) data container...
	docker-compose $(project_build_def) stop
	docker run --rm --volumes-from $(project_build_name)_data_1 alpine tar jch $(VOLUMES) > $(BACKUP_PATH_CI)/elitedom-dev-latest.tar.bz2
	docker-compose $(project_build_def) up -d
endif
endif

import-data:
	docker-compose $(project_build_def) stop
	docker run --rm --volumes-from $(prj_norm)_data_1 -v ${PWD}/${FILE}:/data.tar.bz2 alpine tar -xjf /data.tar.bz2 -C /
	docker-compose $(project_build_def) up -d

import-data-ci:
ifeq ($(build_sys),ci)
ifeq ($(INTEGRATION),1)
	@echo "Importing $(env_norm) backup data container..."
	docker-compose $(project_build_def) stop
	docker run --rm --volumes-from $(project_build_name)_data_1 -v $(BACKUP_PATH_CI)/elitedom-dev-latest.tar.bz2:/data.tar.bz2 alpine tar -xjf /data.tar.bz2 -C /
	docker-compose $(project_build_def) up -d
endif
endif

create-deploy-environment:
ifeq ($(build_sys),ci)
ifeq ($(DEPLOY),1)
	@echo Copying data from build product...
	docker run --rm --volumes-from $(project_build_name)_data_1 -v $(temp):/backup alpine tar cfh /backup/$(temp_backup_filename) $(VOLUMES)
	docker-compose $(project_build_def) stop
	docker-compose $(project_build_def) rm -fv

	# Copy file to avoid the usage of "-f" docker-compose argument.
	cp $(ci_deploy_compose_file) $(regular_compose_file)
	docker-compose $(project_deploy_def) stop
	docker-compose $(project_deploy_def) rm -vf
	docker-compose $(project_deploy_def) pull
	docker-compose $(project_deploy_def) build
	docker-compose $(project_deploy_def) up data
	docker run --rm --volumes-from $(project_deploy_name)_data_1 -v $(temp):/backup alpine tar -xf /backup/$(temp_backup_filename) -C /
	docker run --rm --volumes-from $(project_deploy_name)_data_1 alpine /bin/ash -c "chmod -R 777 /var/www/html/sites/default/files"
	docker run --rm -v $(temp):/backup alpine rm -f /backup/$(temp_backup_filename)
	@echo Starting-up deployment containers...
	docker-compose $(project_deploy_def) up -d
	@echo Deploy environment $(env_norm) successfully created.
endif
endif
