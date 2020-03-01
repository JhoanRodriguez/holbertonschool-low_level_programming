#!/bin/bash
shopt -s nullglob
for i in *.c; do
    gcc -Wall -pedantic -Werror -Wextra -c *.c
done
ar -rc liball.a *.o
