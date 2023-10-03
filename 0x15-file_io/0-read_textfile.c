#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This Read text file to be  print to the STDOUT.
 * @filename: this is the text file that is being read
 * @letters: this has to do with the number of letters that re to be read
 * Return: w- when the actual number of the bytes are read and printed
 *        0 it is  when a function fails or when filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *buf;
	ssize_t skd;
	ssize_t wrk;
	ssize_t tek;

	skd = open(filename, O_RDONLY);
	if (skd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	tek = read(skd, buf, letters);
	wrk = write(STDOUT_FILENO, buf, tek);

	free(buf);
	close(skd);
	return (wrk);
}
