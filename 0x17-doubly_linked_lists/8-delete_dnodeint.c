#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position
 * in a dlistint_t list.
 * @head: Pointer to a pointer to the head of the doubly linked list
 * @index: Index of the node to be deleted. Index starts at 0
 * Return: 1 if the deletion succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	current = temp->prev;

	current->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = current;

	free(temp);
	return (1);
}
