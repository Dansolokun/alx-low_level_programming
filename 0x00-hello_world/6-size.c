#include <stdio.h>

/**
 * main - Entry point "prints the size of various types on the computer it is compiled and run on."
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	printf("size of a char: %i byte(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %i byte(s)", sizeof(long int));
	printf("size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
