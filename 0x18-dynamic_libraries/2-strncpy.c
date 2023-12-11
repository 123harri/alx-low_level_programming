#include "main.h"
/**
 * _strncpy - copy a string with a specified maximum length
 * @dest: destination of the string
 * @src: source of the string to copy from
 * @n: maximum number of characters to copy
 * Return: A pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
char *result = dest;
while (*src != '\0' && n > 0)

{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)

{
*dest = '\0';
dest++;
n--;
}

return (result);
}
