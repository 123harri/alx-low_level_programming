#include "main.h"

/**
 * print_rev - prints a string in reverse followed by new line
 * @s: pointer to e input string
 */

void print_rev(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
s -= length;
while (length > 0)
{
length--;
_putchar(s[length]);
}

_putchar('\n');
}
