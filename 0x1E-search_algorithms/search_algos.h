#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stddef.h>

/*search algos*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

/*helper funcs*/
size_t get_pos(int *array, int low, int high, int value);

#endif /*SEARCH_ALGOS*/