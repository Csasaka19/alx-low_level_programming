#include <stdio.h>
#include "main.h"
/**
 *main - print name of the program
 *@argc: argument counter
 *@argv: pointer to array of argument
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s", argv[0]);
return (0);
}
