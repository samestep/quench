#!/usr/bin/env bash
set -eo pipefail
yarn build --filter=cli --output-logs=new-only
echo
node packages/cli/index.js "$1" | node --input-type=module - "${@:2}"
