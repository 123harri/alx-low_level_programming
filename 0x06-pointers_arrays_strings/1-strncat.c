#include "main.h"
/**
 * _strncat - Concatenate two strings
 * with a limit on the number of characters to copy
 * @dest: destination of the string
 * @src: source of the string to append to dest
 * @n: maximum number of characters to copy from src
 * Return: result
 */
char *_strncat(char *dest, char *src, int n)
{

char *result = dest;
while (*dest != '\0')

{
dest++;
}

while (*src != '\0')

{
*dest = *src;
dest++;
src++;
n--;
}

*dest = ('\0');
return (result);
}
