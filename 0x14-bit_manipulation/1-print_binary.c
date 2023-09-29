#include "main.h"

/**
 * To print_binary - Its prints a binary as same as a decimal number
 * @n: prints a number in binary
 */

void print_binary(unsigned long int n)

{

	int skd, count = 0;
	unsigned long int current;

	for (skd = 63; skd >= 0; skd--)
	{
		current = n >> skd;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');

}
