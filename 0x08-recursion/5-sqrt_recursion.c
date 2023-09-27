#include "main.h"

int find_sqrt(int n, int start, int end);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number for which the square root is calculated
 * Return: the natural square root of n, or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (find_sqrt(n, 1, n / 2));
}
}
/**
 * find_sqrt - a function that help to recursively
 * find the square root in a range
 * @n: number which the square root is calculated
 * @start: starting point of the search range
 * @end: end point of the search range
 * Return: natural square root of n, or -1 if no natural square root exist
 */
int find_sqrt(int n, int start, int end)
{
int mid;
if (start > end)
{
return (-1);
}
mid = (start + end) / 2;
if ((mid *mid) == n)
{
return (mid);
}
else if ((mid *mid) < n)
{
return (find_sqrt(n, mid + 1, end));
}
else
{
return (find_sqrt(n, start, mid - 1));
}
}
