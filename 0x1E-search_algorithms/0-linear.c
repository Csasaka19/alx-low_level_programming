#include "search_algos.h"

/**
 * linear_search - searches an algorithm using linear method
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
size_t k;

if (!array)
{
return (-1);
}

k = 0;
while (k < size)
{
printf("Value of the checked array [%li] = %d\n", k, array[k]);
if (array[k] == value)
{
return (k);
}
k++;
}
return (-1);
}
