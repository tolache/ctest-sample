#!/usr/bin/env bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

mkdir $SCRIPT_DIR/build
cd $SCRIPT_DIR/build
cmake ..
cmake --build .
ctest -VV
