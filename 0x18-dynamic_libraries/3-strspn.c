#include "main.h"
/**
 * _strspn - gets the length of the prefix substring
 * @s: pointer to the string to search
 * @accept: pointer the string containing the characters to accept
 * Return: number of bytes in the initial segment of s
 * which only consist bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
{
i++;
break;
}
else if (accept[k + 1] == '\0')
return (i);
}
s++;
}
return (i);
}
