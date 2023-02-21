#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int count;
	char a;

	for (count = 1; count <= 10; count++)
	{
		for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
		_putchar('\n');
	}
}
