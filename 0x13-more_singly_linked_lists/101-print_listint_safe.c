#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list
 * @h: A pointer to the head of the listint_t to check
 * Return: If the list is not looped - 0
 * Otherwise - the number of unique nodes in the list
 */
size_t looped_listint_len(const listint_t *h)
{
	const listint_t *t, *t2;
	size_t nodes = 1;

	if (h == NULL || h->next == NULL)
		return (0);

	t = h->next;
	t2 = (h->next)->next;

	while (t2)
	{
		if (t == t2)
		{
			t = h;
			while (t != t2)
			{
				nodes++;
				t = t->next;
				t2 = t2->next;
			}

			t = t->next;
			while (t != t2)
			{
				nodes++;
				t = t->next;
			}

			return (nodes);
		}

		t = t->next;
		t2 = (t2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely
 * @head: A pointer to the head of the listint_t list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
