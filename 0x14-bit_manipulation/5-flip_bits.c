#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int skd, countin = 0;
	unsigned long int cur;
	unsigned long int xclusive = n ^ m;

	for (skd = 63; skd >= 0; skd--)
	{
		cur = xclusive >> skd;
		if (cur & 1)
			countin++;
	}

	return (countin);
}
