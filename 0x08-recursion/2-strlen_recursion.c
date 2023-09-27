#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the string which the length will be calculated
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\n')
return (0);
return (1 + _strlen_recursion(s + 1));
}
