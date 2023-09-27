#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number for which the square root is calculated
 * Return: the natural square root of n, or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
if (n < 0)

return (-1);
return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - a function that help to recursively
 * find the square root in a range
 * @n: number which the square root is calculated
 * @i: iterator
 * Return: natural square root of n, or -1 if no natural square root exist
 */
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
{
return (-1);
}

if ((i * i) == n)
{
return (i);
}

return (actual_sqrt_recursion(n, i + 1));
}
