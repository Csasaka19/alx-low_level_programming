#include "search_algos.h"

void print_array(int *a, int i, int j);
/**
 *binary_search - searches an algorithim using binary search method
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return:  index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
size_t k;
int middle;
int left = 0;
int right = size;

if (array == NULL)
{
return (-1);
}

for (k = 0; left < right; k++)
{
printf("Searching in array: ");
print_array(array, left, right);
middle = (left + right) / 2;

if (array[middle] < value)
{
left = middle + 1;
}
else if (array[middle] > value)
{
right = middle;
}
else
{
return (middle);
}
}
return (-1);
}

/**
 * print_array - print `n` elements of an array of integers
 * @a: int array pointer to print
 * @i: int, start index
 * @j: int, end index
 * Description: Numbers must be separated by comma and space.
 * Numbers should be displayed in the same order they are stored in array.
 * You can only use _putchar to print.
 */

void print_array(int *a, int i, int j)
{

for (; i < j; i++)
{
printf("%d", a[i]);
if (i < j - 1)
printf(", ");
}
printf("\n");
}
