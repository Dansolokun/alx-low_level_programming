#include "main.h"

/**
 * append_text_to_file - its Appends or add a text at the end of a file.
 * @filename: its a pointer to the file name or name of file.
 * @text_content: This has to do with the string to add to the end of the file.
 *
 * Return: If eventually the function fails or the filename is NULL - -1.
 *         If in a way file does not exist user lack write permissions - -1.
 *         This will Otherwise print- 1.
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int ol, wrk, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	ol = open(filename, O_WRONLY | O_APPEND);
	wrk = write(ol, text_content, leng);

	if (ol == -1 || wrk == -1)
		return (-1);

	close(ol);

	return (1);
}
