#!/usr/bin/env bash
echo "Install git hook scripts"
mv $PWD/.git/hooks $PWD/.git/hooks-$(date +%s)
git clone gitlab@gitlab.sparkfabrik.com:sparkfabrik/sparkdrupal-qa.git $PWD/.git/hooks
chmod +x $PWD/.git/hooks/pre-commit*
chmod +x $PWD/.git/hooks/commit-msg
