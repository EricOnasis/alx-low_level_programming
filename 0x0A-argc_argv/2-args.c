#include <stdio.h>

/**
 * main - Prints every argument it receives.
 * @argc: The count of arguments supplied.
 * @argv: Array of pointers to the arguments.
 * Return: Returns 0.
 */

int main(int argc, char *argv[])
{
	int arguments;

	for (arguments = 0; arguments < argc; arguments++)
		printf("%s\n", argv[arguments]);
	return (0);

}
