#include "search_algos.h"

/**
  * advanced_binary_recursive - Fetches recursively for a value in a sorted
  * array of integers using binary search.
  * @array: pointer to the first element of the [sub]array to search.
  * @left: The starting index of the [sub]array to look
  * @right: The ending index of the [sub]array to look
  * @value: The value to look for
  * Return: If the value is not found, -1.
  * if not, the index where the value is found
  * Description: Looks the [sub]array being searched after each alteration
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - Looks for a value in a sorted array
  * of ints using advanced binary look.
  * @array: pointer to the first element of the array to look.
  * @size: No. of elements in the array.
  * @value: The value to look for
  * Return: If the value is not found or the array is NULL, -1.
  * if not, the first index where the value is found
  * Description: Displays the [sub]array being searched after each alteration
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
