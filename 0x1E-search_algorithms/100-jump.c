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
	int step = sqrt(size);
	int prev = 0;
	int start, end, i;

	if (array == NULL)
		return (-1);

	while (array[prev] < value && prev < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	start = prev - step;
	end = prev < (int)size ? prev : (int)size - 1;

	printf("Value found between indexes [%d] and [%d]\n", start, end);
	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
