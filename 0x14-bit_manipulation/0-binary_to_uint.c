#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: The string with binary number
 * Return: Returns the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;

	if (b == NULL)
	{
	return (0);
	}

	while (*b != '\0')
	{
	if (*b == '0' || *b == '1')
	{

		converted <<= 1;
		converted += (*b - '0');
	}
	else
	{
		return (0);
	}
	b++;
	}

return (converted);
}
