#!/bin/bash
nasm -f elf64 program.asm -o program.o
gcc -nostartfiles -o program program.o -lm -no-pie
