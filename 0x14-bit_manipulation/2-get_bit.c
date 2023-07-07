#include "main.h"

/**
 * get_bit - Checks the value of a bit at a given index
 * @n: The decimal argument provided
 * @index: The index
 * Return: Returns the value of the bit at given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	else
		return ((n & (1 << index)) >> index);
}

