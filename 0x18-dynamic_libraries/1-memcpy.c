#include "main.h"
/**
 * _memcpy - copies memory area from src to dest
 * @dest: pointer to the destination of a memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
