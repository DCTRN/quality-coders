# !/bin/bash

export CC=/usr/bin/gcc
export CXX=/usr/bin/g++

cmake -G Ninja -S . -B build && cmake --build build