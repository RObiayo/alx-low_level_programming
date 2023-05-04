#include "main.h"

/**
 * binary_to_uint - changes binary no. to unsigned int
 * @x: string with the  binary no.
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *x)
{
	int a;
	unsigned int dec_val = 0;

	if (!x)
		return (0);

	for (a = 0; x[a]; a++)
	{
		if (x[a] < '0' || x[a] > '1')
			return (0);
		dec_val = 2 * dec_val + (x[a] - '0');
	}

	return (dec_val);
}
