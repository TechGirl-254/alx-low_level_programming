#!/bin/bash
gcc -fPIC -Wall -pedantic -Werror -Wextra *.c -shared -o pyfunctions.so
