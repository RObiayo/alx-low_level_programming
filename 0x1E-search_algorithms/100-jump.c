#include "search_algos.h"

/**
  * jump_search - Looks for a value in a sorted array
  * of ints using jump search.
  * @array: pointer to the first element of the array to look
  * @size: No. of elements in the array.
  * @value: The value to look for
  * Return: If the value is not found or the array is NULL, -1.
  * If not, the first index where the value is found
  * Description: Displays a value every time it is compared in the array,
  * uses the square root of the array size.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
