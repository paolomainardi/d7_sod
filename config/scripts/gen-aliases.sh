#!/bin/bash
BASEDIR=$(dirname $0)
REPLACEMENT=$(cat ${BASEDIR}/aliases.dist | sed -e "s:\%PWD\%:${PWD}:g")
echo "${REPLACEMENT}" > .aliases
