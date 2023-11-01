#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - It Allocates bytes for the buffer
 * @file: pointer to file copies the content of a file
 *
 * Return: Pointer to buffer
 **/

char *create_buffer(char *file)
{

	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{

		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);

}

/**
 * close_file - closes the file descriptors
 * @fd: file
 **/

void close_file(int fd)

{

	int cls;

	cls = close(fd);

	if (cls == -1)

	{

		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);

	}
}

/**
 * main - Copy's the contents of a file to another file.
 * @argc: The number of arguments
 * @argv:  pointers to arguments.
 *
 * Return: 0 on (success).
 **/

int main(int argc, char *argv[])

{

	int frm, to, rd, wr;
	char *buffer;

	if (argc != 3)

	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	rd = read(frm, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do

	{
		if (frm == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(to, buffer, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(frm, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	}

	while (rd > 0);

	free(buffer);
	close_file(frm);
	close_file(to);

	return (0);

}
