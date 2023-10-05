#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @letters: letters it should read and print
 * @filename:  the actual number of letters
 *
 * Return: 0 file cannot open
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t fwd;
	ssize_t wd;
	ssize_t t;

	fwd = open(filename, O_RDONLY);
	if (fwd == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	t = read(fwd, bf, letters);
	wd = write(STDOUT_FILENO, bf, t);
		free(bf);
		close(fwd);
		return (wd);
}
