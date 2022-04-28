#include "main.h"
/**
  *binary_to_uint - converts a binary number to an unsigned int
  *@b: pointer to string
  *Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int k = 0;
int len = 0;
int i;
if (b == NULL)
return (k);
while (b[len] != '\0')
len++;
len -= 1;
i = 0;
while (b[i])
{
if ((b[i] != '0') && (b[i] != '1'))
return (k);
if (b[i] == '1')
k += (1 * (1 << len));
i++;
len--;
}
return (k);
}
