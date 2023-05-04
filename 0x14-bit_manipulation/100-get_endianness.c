#include "main.h"

/**
 * get_endianness - confirms endianness
 * Return: 0if large, 1is small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
