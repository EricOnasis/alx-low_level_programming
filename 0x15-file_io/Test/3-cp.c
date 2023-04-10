#include "main.h"

/**
 * main - copies content of one file to another file
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: Return 0 successful
 */
int main(int argc, char *argv[])
{
	int fd_rd, fd_wr, i, j, k;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_rd = open(argv[1], O_RDONLY);
	if (fd_rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_wr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(fd_rd, buf, BUFSIZ)) > 0)
	{
		if (fd_wr < 0 || write(fd_wr, buf, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_rd);
			exit(99);
		}
	}
	
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = close(fd_rd);
	k = close(fd_wr);
	if (j < 0 || j < 0)
	{
		if (j < 0 || k < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_rd);
		exit(100);
	}
	return (0);
}
