#include "main.h"
/**
 * append_text_to_file - Create a function that creates a file
 * @filename: is the name of the file to create and text content
 * @text_content: is the file to be opened or read
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
