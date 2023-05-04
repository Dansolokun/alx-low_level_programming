#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)

{
	int skd, countin = 0;
	unsigned long int cur;

	for (skd = 63; skd >= 0; skd--)
	{
		cur = n >> skd;

		if (cur & 1)
		{
			_putchar('1');
			countin++;
		}
		else if (countin)
			_putchar('0');
	}
	if (!countin)
		_putchar('0');
}
