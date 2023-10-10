#include "search_algos.h"

/**
  * linear_search - Looks for value of arraysin ints
  * @array: pointer to first element of the array to look for
  * @size: No. of elements in the array.
  * @value: Value to look for
  * Return: If the value is not present or the array is NULL, -1.
  * if not, the first index where the value is found
  * Description: Displays a value every time it is compared in the array.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
