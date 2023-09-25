#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to locate
 * Return: pointer to the first occurrence of character c in the string
 * or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
return (NULL);
}
