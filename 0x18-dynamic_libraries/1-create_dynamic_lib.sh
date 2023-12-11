#!/bin/bash
gcc -fpic -c *.c # Generate an object file given
gcc -shared -o liball.so *.o
