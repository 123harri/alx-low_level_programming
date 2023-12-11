#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination of the string
 * @src: source string to append the dest
 * Return: result
 */
char *_strcat(char *dest, char *src)

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
}
*dest = ('\0');
return (result);
}
