#include "main.h"

/**
 * set_bit - it will definately set a bit at a given index to 1(one)
 * @n: a pointer to the number to enforce or enable change
 * @index: the index of the bit is to set to 1(one)
 *
 * Return: 1 stands for successful, -1 represents failed operation
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
