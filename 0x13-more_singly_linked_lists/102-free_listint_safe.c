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
	listint_t *current;
	listint_t *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		printf("[%p] %d\n", (void *)temp, temp->n);
		free(temp);
		count++;
		if (temp >= current)
		{
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (count);
}
