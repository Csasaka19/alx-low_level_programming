#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;
a = 972;
b = -98;
c = 0;

if (a > b)
{
if (a > c)
{
printf("a is the largest\n");
largest = a;
}
else
{
printf("c is the largest\n");
largest = c;
}
}

else
{
if (b > c)
{
printf("b is the largest\n");
largest = b;
}
else
{
printf("c is the largest\n");
largest = c;
}
}
return (largest);
}
