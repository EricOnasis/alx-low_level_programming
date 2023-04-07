#include "main.h"

/**
 * get_bit - The value of a bit at given index
 * @n: The parameter
 * @index: The index
 * Return: Returns value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (1 << index)) >> index);

}
