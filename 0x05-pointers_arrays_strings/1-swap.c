#include "main.h"
/**
*swap_int - swaps value of two integers
*@a: integer swap
*@b: integer swap
*/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
