#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted
 * array of integers using Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 *         or -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left, right, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (left = 0, right = step; right < size && array[right] < value;)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	right = right < size ? right : size - 1;
	for (; left < right && array[left] < value; left++)
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	printf("Value checked array[%lu] = [%d]\n", left, array[left]);

	return (array[left] == value ? (int)left : -1);
}
