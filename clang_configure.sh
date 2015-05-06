#!/usr/bin/env bash
CC=clang CXX=clang++ CXXFLAGS="-Wno-deprecated-declarations -O3 -std=c++11 -stdlib=libc++" ./configure
