#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * then a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char test;

	for (test = 'a'; test <= 'z'; test++)
	{
		putchar(test);
	}
	putchar('\n');
	return (0);
}
