#include "main.h"
/**
 * read_textfile - Reads file and prints it to POSIX standard output
 * @filename: Pointer to the filename
 * @letters: Number of letters the function reads and prints.
 *
 * Return: Returns 0 if the function fails or if filename is NULL
 * O/w - Number of bytes the function reads and prints
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wr;
	char *buffer = malloc(letters);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if ((filename == NULL) | (buffer == NULL))
		return (0);

	if (opn == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opn);

	return (wr);
}
