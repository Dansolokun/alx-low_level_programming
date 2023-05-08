#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *buf;
	ssize_t skd;
	ssize_t wrt;
	ssize_t tty;

	skd = open(filename, O_RDONLY);
	if (skd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	tty = read(skd, buf, letters);
	wrt = write(STDOUT_FILENO, buf, tty);

	free(buf);
	close(skd);
	return (wrt);
}
