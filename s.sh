#!/bin/bash
clang main.c -Werror -O1 -L  /opt/homebrew/lib/ -I /opt/homebrew/include/ -std=c2x -o m && ./m