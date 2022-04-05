#include <stdio.h>
#include "main.h"
/**
 *main - prints number of arguments passed to a program
 *@argc: argument counter
 *@argv: pointer to array of arguments
 *Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
if (argv > 0)
printf("%d\n", argc - 1);
return (0);
}
