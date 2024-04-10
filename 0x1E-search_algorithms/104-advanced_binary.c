#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints the elements of an array within a specified range.
 * @array: Pointer to the first element of the array.
 * @start: Start index of the range to print.
 * @end: End index of the range to print.
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[end]);
}

/**
 * advanced_binary_recursive - Recursive helper function for
 * advanced binary search.
 * @array: Pointer to the first element of the array.
 * @left: Left index of the subarray.
 * @right: Right index of the subarray.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, -1 otherwise.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_array(array, left, right);

	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
			return (mid);
		else
			return (advanced_binary_recursive(array, left, mid, value));
	}
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, right, value));
	else
		return (advanced_binary_recursive(array, left, mid, value));
}

/**
 * advanced_binary - Searches for a value in a sorted
 * array of integers using advanced binary search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, -1 otherwise.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
