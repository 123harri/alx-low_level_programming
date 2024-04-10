#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted singly
 *             linked list of integers using jump search.
 * @list: A pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         else, a pointer to the first node where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step, jump_index;
	listint_t *current, *jump_node;

	if (list == NULL || size == 0)
		return (NULL);

	jump_step = 0;
	jump_index = sqrt(size);

	for (current = jump_node = list; jump_node->index + 1 < size && jump_node->n < value;)
	{
		current = jump_node;
		for (jump_step += jump_index; jump_node->index < jump_step; jump_node = jump_node->next)
		{
			if (jump_node->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump_node->index, jump_node->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			current->index, jump_node->index);

	for (; current->index < jump_node->index && current->n < value; current = current->next)
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
	printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);

	return (current->n == value ? current : NULL);
}
