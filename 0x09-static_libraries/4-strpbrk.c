#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: A pointer to the string to search.
 * @accept: A pointer to the string containing the bytes to search for.
 * Return: pointer to the first byte in s that matches
 * one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
return (s);
a++;
}
s++;
}
return (NULL);
}
