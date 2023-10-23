#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list
 * @index: The index of the node to delete (starting at 0)
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	while (current != NULL)
	{
		if (i == index - 1)
		{
			if (current->next != NULL)
			{
				temp = current->next;
				current->next = temp->next;
				free(temp);
				return (1);
			}
			else
			{
				return (-1);
			}
		}
		current = current->next;
		i++;
	}
	return (-1);
}
