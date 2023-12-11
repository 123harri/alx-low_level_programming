#include "main.h"


/**
 * _abs - Computes the absolute value of an integer
 * @c: the int to check
 * Return: Absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;


		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
