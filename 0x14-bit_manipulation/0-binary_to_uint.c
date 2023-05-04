#include "main.h"

/**
 * binary_to_uint - its converts a binary number into an unsigned int
 * @b: string contains the binary number
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)

{
	int d;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (d = 0; b[d]; d++)
	{
		if (b[d] < '0' || b[d] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[d] - '0');
	}

	return (dec_val);
}
