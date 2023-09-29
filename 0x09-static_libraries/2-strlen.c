#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: Pointer to the input string
 * Return: The length of the string (number of characters)
 */

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
s++;
length++;
}
return (length);
}
