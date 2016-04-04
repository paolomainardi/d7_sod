FROM sparkfabrik/docker-php-base-image:5.6.19
MAINTAINER paolo.mainardi@sparkfabrik.com
ENV REFRESHED_AT 2016-03-14

# Configure cron.
COPY config/docker/cron/crontab /etc/cron.d/cron
RUN chmod a+x /etc/cron.d/cron

# ssh configuration
#COPY elite-docker/ssh-keys/deploy /ssh-keys/deploy
RUN echo "IdentityFile /ssh-keys/deploy\n" >> /etc/ssh/ssh_config && \
    echo "StrictHostKeyChecking no" >> /etc/ssh/ssh_config

# Install composer dependencies.
COPY composer* /var/www/html/
RUN composer install --no-interaction --prefer-dist

# Drush make and compile themes.
COPY build* /var/www/html/
COPY app.make /var/www/html
COPY sites/settings.php.dist /var/www/html/sites/settings.php.dist
RUN bin/drush --nocolor make --concurrency=8 -y app.make && \
    bin/phing generate-settings -Dvendor="vendor" -Dproject="project" -Denv="loc"

# Copy application.
COPY . /var/www/html/
