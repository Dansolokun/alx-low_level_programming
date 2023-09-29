#include "main.h"

/**
 * binary_to_uint - it will help convert a binary numbers to unsigned int
 * @b: a string holding or having a binary number
 *
 * Return: the converted number shall be returned
 */

unsigned int binary_to_uint(const char *b)

{
	int skd;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (skd = 0; b[skd]; skd++)
	{
		if (b[skd] < '0' || b[skd] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[skd] - '0');
	}

	return (dec_val);
}
