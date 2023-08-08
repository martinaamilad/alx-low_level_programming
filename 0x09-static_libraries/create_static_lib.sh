#!/bin/bash

# Get the list of all the .c files in the current directory
files=$(ls *.c)

# Change the .c files to object files
objects=$(for file in $files; do echo "$file:o"; done)

# Create the static library
ar -rc liball.a $objects

# Optimize the static library
ranlib liball.a
