#include "main.h"
/**
  *int set_bit - sets the value of a bit to 1 at a given index
  *@index:  is the index, starting from 0 of the bit you want to set
  *Return: 1 if it worked, or -1 if an error occurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int maximum_bits;
unsigned long int test = 1;

maximum_bits = (sizeof(unsigned long int) * 8);
if (index > maximum_bits)
return (-1);
test <<= index;
*n = (*n | test);

return (1);
}
