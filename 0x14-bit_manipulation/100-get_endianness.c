#include "main.h"

/**
 * get_endianness - it sorts of checks if a machine is little endian or big one
 * Return: 0 it represents big, 1 it stands for little
 */

int get_endianness(void)

{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
