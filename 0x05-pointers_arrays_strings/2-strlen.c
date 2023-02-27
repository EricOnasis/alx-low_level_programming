#include "main.h"

/**
 * _strlen - calculate the length of a string.
 *
 * @s: the string to calculate its length.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
