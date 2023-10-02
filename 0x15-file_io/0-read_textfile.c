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
	char *fub;
	ssize_t fb;
	ssize_t j;
	ssize_t s;

	fb = open(filename, O_RDONLY);
	if (fb == -1)
		return (0);
	fub = malloc(sizeof(char) * letters);
	s = read(fb, fub, letters);
	j = write(STDOUT_FILENO, fub, s);

	free(fub);
	close(fb);
	return (j);
}
