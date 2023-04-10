#include "main.h"

/**
 * append_text_to_file - Appends text to the end of file
 * @filename: A pointer to the filename
 * @text_content: The string to add to the file
 *
 * Return: Return -1 if the function fails or if the user lacks wr permissions
 *         Otherwise, Return 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int opn, wr;


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wr = write(opn, text_content, len);

	if (opn == -1)
		return (-1);
	if (wr == -1)
		return (-1);

	close(opn);

	return (1);
}
