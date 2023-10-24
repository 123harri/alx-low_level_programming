#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: Pointer to a pointer to the head of the list
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		count++;
		if (*h >= temp)
		{
			*h = NULL;
			break;
		}
	}
	return (count);
}
