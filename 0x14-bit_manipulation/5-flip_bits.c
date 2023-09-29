#include "main.h"

/**
 * flip_bits - this counts the number of bits to undergo change
 * to have from one number to another
 * @n: it represent the first number to be used in the program
 * @m: it represents the second number to be used in the program
 *
 * Return: it returns number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
