#include "main.h"
/**
 * flip_bits - determine how many bits to flip to get from one num to another
 * @n: number
 * @m: number
 * Return: how many bits differ
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int diff_bits = 0;
unsigned long int diff;
diff = n ^ m;
do {
diff_bits += (diff & 1);
diff >>= 1;
} while (diff > 0);
return (diff_bits);
}
