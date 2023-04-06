#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: The string with binary number
 * Return: Returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int conv;
	unsigned int deci = 0;

	if (!b)
		return (0);

	for (conv = 0; b[conv]; conv++)
		{
		if (b[conv] < '0' || b[conv] > '1')
			return (0);
		deci = 2 * deci + (b[conv] - '0');
		}
	return (deci);
}
