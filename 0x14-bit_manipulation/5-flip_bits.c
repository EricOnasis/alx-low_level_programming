#include "main.h"
/**
 * flip_bits - The number of bits to be flipped
 * @n: The given number
 * @m: The parameter
 * Return: Returns the bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, flip = 0;

	for (i = 0; i < 32; i++)
	{
		if ((m & 1) != (n & 1))
			flip += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (flip);
}
