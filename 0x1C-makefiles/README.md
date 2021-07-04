#  Holberton School - 0x1B. C - Makefiles
Description

The focus of this project is to learn:
* what a Makefile is and how to use the 'make' command
* when, why and how to use Makefiles
* what the rules are and how to set and use them
* what explicit and implicit rules are
* what the most common / useful rules are
* what variables are and how to set and use them

## Environment
* Ubuntu 14.04 LTS
* gcc standard C90

## New commands / functions used:
`make` Makefile`

## Helpful Links
* Makefile: https://www.google.com/search?q=makefile

## File Descriptions
- `0-Makefile`: uses the 'all' rule to compile relevant files and build executable
- `1-Makefile`: uses the 'all' rule and the variables CC (gcc) and SRC (all .c files)
- `2-Makefile`: uses the 'all' rule and the variables CC, SRC, OBJ (.o files) and NAME (name of executable)
- `3-Makefile`: uses rules 'all', 'clean' (deletes EMACS temp and executable files), 
'oclean' (deletes object files) and 'fclean' (deletes EMACS temp files, executable and object files)  and uses the variables CC, SRC, OBJ, NAME, RM (program to delete files) and re (forces recompilation of all source files)
- `4-Makefile`: uses rules 'all', 'clean', 'oclean', 'fclean' and 're' and uses the variables CC, SRC, OBJ, NAME, RM and CFLAGS (-Wall -Werror -Wextra -pedantic)

## Author
Bassem Yahia

linkdin: https://www.linkedin.com/in/bassem-ben-yahia/

## License
Public Domain, no copyright protection
