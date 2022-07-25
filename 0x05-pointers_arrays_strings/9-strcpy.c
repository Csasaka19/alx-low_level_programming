#include "main.h"

/**
*_strcpy - copies string pointed by src, including null type byte \0
*to buffer pointed by dest
*@dest: copy source to this buffer
*@src: source to copy
*Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = -1;

do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');

return (dest);
}
