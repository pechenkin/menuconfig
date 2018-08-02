#!/bin/bash

if [ -n "$srcdir" ]; then
if [ -f "./pytest.ini" ]; then srcdir = ./; fi
if [ -f "./../pytest.ini" ]; then srcdir = ./../; fi
if [ -f "./../../pytest.ini" ]; then srcdir = ./../../; fi
fi

python3 -B -m pytest $srcdir -o cache_dir=.cache