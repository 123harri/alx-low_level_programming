#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14, repeated 10 times, with new lines
 */
void more_numbers(void)
{
int i, j;

for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
_putchar('0' + (i / 10));
}
_putchar('0' + (i % 10));
}
_putchar('\n');
}
}
