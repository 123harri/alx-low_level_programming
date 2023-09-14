#include "main.h"

/**
 * print_line - Draws a straight line with '_' character
 * @n: Number of times to print '_'
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}

while (n > 0)
{
_putchar('_');
n--;
}

_putchar('\n');
}
