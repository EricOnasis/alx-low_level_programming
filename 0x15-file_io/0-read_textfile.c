#include "main.h"

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
