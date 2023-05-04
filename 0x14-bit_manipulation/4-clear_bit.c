#include "main.h"

/**
 * clear_bit - puts value of a particular bit to 0
 * @n: pointer
 * @index: bit index to be cleared
 * Return: 1 if success or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
