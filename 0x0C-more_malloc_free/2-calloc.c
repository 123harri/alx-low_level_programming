#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of element in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total_size;
	void *ptr;

if (nmemb == 0 || size == 0)
	return (NULL);

total_size = nmemb * size;

if (total_size / nmemb != size)
	return (NULL);

ptr = malloc(total_size);

if (ptr == NULL)
	return (NULL);

for (i = 0; i < total_size; i++)
*((char *)ptr + i) = 0;
return (ptr);
}
