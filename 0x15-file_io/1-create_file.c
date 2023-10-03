#include "main.h"

/**
 * create_file  - it helps to Creates a file.
 * @filename: it is a pointer to the name of the file to create.
 * @text_content: This is a pointer to a string to enable it write to the file.
 *
 * Return: when the function fails it displays - -1.
 *         Otherwise if it works successfully- 1.
 */

int create_file(const char *filename, char *text_content)

{
	int skd, wrk, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	skd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrk = write(skd, text_content, leng);

	if (skd == -1 || wrk == -1)
		return (-1);

	close(skd);

	return (1);
}
