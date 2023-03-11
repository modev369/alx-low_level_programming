#!/bin/bash

# compile all the .c files in the current directory
gcc -Wall -Werror -Wextra -pedantic -c *.c

# create the static library from the compiled object files
ar -rc liball.a *.o

# index the static library
ranlib liball.a
