#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * then uppercase
 * then a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int test;

	for (test = 'a'; test <= 'z'; test++)
		putchar(test);
	for (test = 'A'; test <= 'Z'; test++)
		putchar(test);
	putchar('\n');
	return (0);
}
