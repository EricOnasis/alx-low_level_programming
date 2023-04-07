#include "main.h"

/**
 * print_binary - prints the binary representation of a given number
 * @n: The argument passed
 */

void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int position;

	for (a = 63; a >= 0; a--)
	{
		position = n >> a;

		if (position & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (count == 0)
		_putchar('0');
}
