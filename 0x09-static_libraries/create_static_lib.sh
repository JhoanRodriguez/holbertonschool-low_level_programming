#!/bin/bash
<<<<<<< HEAD
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
=======
gcc -c *.c
ar rcs liball.a *.o
>>>>>>> 114779a629a039ca5b444a276578052c5b136f69
