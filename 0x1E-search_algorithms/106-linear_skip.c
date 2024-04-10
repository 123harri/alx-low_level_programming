#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @head: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where the value is located,
 * or NULL if the value is not present in the list or if head is NULL.
 *
 * Description: Prints a value every time it is compared in the list.
 * A node of the express lane is placed every index which is a
 * multiple of the square root of the size of the list.
 */
skiplist_t *linear_skip(skiplist_t *head, int value)
{
	skiplist_t *curr, *exp_lane;

	if (head == NULL)
		return (NULL);

	for (curr = exp_lane = head; exp_lane->next != NULL && exp_lane->n < value;)
	{
		curr = exp_lane;
		if (exp_lane->express != NULL)
		{
			exp_lane = exp_lane->express;
			printf("Value checked at index [%ld] = [%d]\n",
				   exp_lane->index, exp_lane->n);
		}
		else
		{
			while (exp_lane->next != NULL)
				exp_lane = exp_lane->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   curr->index, exp_lane->index);

	for (; curr->index < exp_lane->index && curr->n < value; curr = curr->next)
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
	printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);

	return (curr->n == value ? curr : NULL);
}
