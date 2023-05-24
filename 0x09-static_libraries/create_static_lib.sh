#!/bin/bash
gcc -c -Wall -Werror -Wall -pedantic *.c
ar rcs liball.a *.o
