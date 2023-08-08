#!/bin/bash

ls *.c

gcc -c *.c

ar -rcs liball.a *.o
