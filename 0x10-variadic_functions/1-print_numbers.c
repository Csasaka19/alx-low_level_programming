#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print varying amount of numbers
 * @separator: delimiter
 * @n: amount of arguments in list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int l;

if (n > 0)
{
va_start(valist, n);
for (l = 1; l <= n; l++)
{
printf("%d", va_arg(valist, int));
if (l != n && separator != NULL)
printf("%s", separator);
}
va_end(valist);
}
printf("\n");
}
