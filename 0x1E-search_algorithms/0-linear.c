#include "search_algos.h"

/**
 * linear_search - Performs linear search on array
 * @array: the target array
 * @size:  size of the array elements
 * @value: int to search for
 * Return: Index of the value, else -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
