#ifndef  SEARCH_ALGO_H
#define  SEARCH_ALGO_H

#include <stddef.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


/**
 * linear_search - searches an algorithm using linear method
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value);
/**
 *binary_search - searches an algorithim using binary search method
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return:  index where value is located
 */

int binary_search(int *array, size_t size, int value);


#endif /*End if*/
