# !/bin/bash

export CC=/usr/bin/clang
export CXX=/usr/bin/clang++

cmake -G Ninja -S . -B build && cmake --build build
