#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted singly
 * linked list of integers using jump search.
 * @list: A pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 * else, a pointer to the first node where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, index;
	listint_t *curr, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	index = sqrt(size);

	for (curr = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		curr = jump;
		for (step += index; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		curr->index, jump->index);

	for (; curr->index < jump->index && curr->n < value; curr = curr->next)
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
	printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);

	return (curr->n == value ? curr : NULL);
}
