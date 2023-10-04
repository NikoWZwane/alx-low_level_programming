#include "main.h"
/**
 * create_file - creates a file
 * @text_content: to string to write to the file
 * @filename: name of the file to create
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fwd, w, leng = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}
	fwd = open(filename, O_CREAT | O_RDWR | O_TRUNC,0600);
	w = write(fwd, text_content, leng);
	if (fwd == -1 || w == -1)
		return (-1);
	close(fwd);
	return(1);
}
