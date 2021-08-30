#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_range(size_t start, size_t end, int *array);
int exponential_search(int *array, size_t size, int value);
int ranged_binary_search(int *array, size_t size, int value, size_t start, size_t end);
int jump_search(int *array, size_t size, int value);

#endif
