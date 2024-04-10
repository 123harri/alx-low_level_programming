#include <stdio.h>
#include "search_algos.h"

/**
 * _binary_search - Searches for a value in a sorted array
 * of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @left: The starting index of the [sub]array to search.
 * @right: The ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * else, the index where the value is located.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 * of integers using exponential search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the index where the value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index = 1, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (; index < size && array[index] <= value; index *= 2)
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}

	right = (index < size) ? index : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", index / 2, right);
	return (_binary_search(array, index / 2, right, value));
}
