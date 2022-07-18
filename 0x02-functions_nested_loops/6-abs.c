#include "main.h"
/**
*_abs - returns absolute number
*Description: compute absolute integer
*@n: integer argument
*Return: absolute values of n
*/
int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else if (n > 0)
{
return (n);
}
else
{
return (0);
}
}
