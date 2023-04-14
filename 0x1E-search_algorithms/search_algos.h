#ifndef SEARCH
#define SEARCH
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


/* mandatory tasks*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* advanced tasks */
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif
