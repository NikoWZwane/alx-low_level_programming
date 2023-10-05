#include "mai.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %\n", file);
		exit(99);
	}
	return (buff);
}
/**
 *
 *

