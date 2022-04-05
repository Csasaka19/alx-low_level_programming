#include <stdio.h>
#include "main.h"
/**
  *main - multiplies two numbers
  *@argc: argument counter
  *@argv: pointer to arrays of characters
  *Return: 0 on success, 1 when two arguments are not passed
  */
int main(int argc, char *argv[])
{
if (argc < 3)
{
printf("Error try again!!\n");
return (1);
}
printf("%d", atoi(argv[1]) *atoi(argv[2]);
return (0);
}
