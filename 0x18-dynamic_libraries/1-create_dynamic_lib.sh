#!/bin/bash
gcc -c -fpic -Werror -Wall -Wextra -pedantic *.c;
gcc -shared -o liball.so -Werror -Wall -Wextra -pedantic *.o;
