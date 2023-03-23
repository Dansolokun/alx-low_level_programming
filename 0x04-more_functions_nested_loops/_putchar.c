#include <unistd.h>

/**
 * _putchar - Write a program that prints _putchar, followed by a new line
 * @c: The value to be printed
 * Return: Always 0 (Success)
 */

int _putchar(char c)

{

	return (write(1, &c, 1));

}
