#include "main.h"

/**
 * clear_bit - Sets the bit value to 1 at givem index
 * @n: The argument
 * @index: The index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		{
		return (-1);
		}

	*n &= ~(1 << index);

	return (1);
}

