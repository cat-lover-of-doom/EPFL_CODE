#!/bin/bash

mkdir build
cd build
cmake ..
cd ..
rm -rf build


clean(){
  rm Makefile main
}

