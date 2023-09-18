#include "main.h"
/**
 * swap_int - function that takes two integer pointers as parameters
 * it swaps the values of the integers pointed to by these pointers
 * @a: pointer to an integer
 * @b: another pointer to an integer
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
