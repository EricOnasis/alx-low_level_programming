#include "main.h"
/**
 * create_file - Creates a file
 * @filename: A pointer to the filename
 * @text_content: A pointer to the string content of the file
 *
 * Return: If the function runs, return 1. If it fails return -1
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0;
	int opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	int wr = write(opn, text_content, len);


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}


	if (opn == -1 || wr == -1)
		return (-1);

	close(opn);

	return (1);
}
