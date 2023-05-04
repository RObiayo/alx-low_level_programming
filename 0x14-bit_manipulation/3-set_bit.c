#include "main.h"

/**
 * set_bit - bit setter to 1
 * @n: pointer to the integer to be turned
 * @index: bit index to 1
 * Return: 1 on success, -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
