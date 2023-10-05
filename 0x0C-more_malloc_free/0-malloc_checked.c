#include "main.h"

/**
 * malloc_checked - function that allocate memory of malloc
 * @b: size of the memory to allocate
 * Return: pointer to the memory allocated
 * if malloc fails, exit with status value of 98
 */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
exit(98);
return (ptr);
}
