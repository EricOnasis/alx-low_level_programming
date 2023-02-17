#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * skips letter q and e
 * then a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char test = 'a';

	while (test <= 'z')
	{
		if (test != 'e' && test != 'q')
		{
			putchar(test);
		}
		test++;
	}
	putchar('\n');
	return (0);
}
