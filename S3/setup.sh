#!/bin/bash

mkdir build
cd build
cmake ..
cd ..
cp build/compile_commands.json .
rm -rf build


clean(){
  rm Makefile main
}

