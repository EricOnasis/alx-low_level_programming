#include "main.h"

/**
 * get_endianness - Checks for endianness
 * Return: Returns 0 or 1 depending on whether its big or little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *i = (char *) &j;

	return (*i);
}

