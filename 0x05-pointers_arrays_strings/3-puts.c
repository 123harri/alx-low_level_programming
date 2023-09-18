#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: Pointer to the input string
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
