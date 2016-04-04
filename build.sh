#!/usr/bin/env bash
VENDOR="$1"
PROJECT="$2"
ENV="$3"
if [ -n "${PROJECT}" ] && [ -n "${VENDOR}" ] && [ -n "${ENV}" ]
  then
    composer install --no-interaction --prefer-dist
    bin/phing build-app -Dvendor="${VENDOR}" -Dproject="${PROJECT}" -Denv="${ENV}"
fi
