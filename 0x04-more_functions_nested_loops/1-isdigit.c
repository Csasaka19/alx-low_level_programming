#include "main.h"

/**
 * _isdigit - checks for a digit input
 * @c: digit to be checked
 * Return: 1 if it is a digit, 0 if a character or entirely false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
