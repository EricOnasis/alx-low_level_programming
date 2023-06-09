#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiple of two numbers
 * @argc: Number of arguments passed
 * @argv: Pointer to the arguments passed
 * Return: 'Error' if the program doesn't receive two arguments,
 * followed by a new line and return 1
 */

int main(int argc, char *argv[])
{
	int firstnum, secondnum, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	firstnum = atoi(argv[1]);
	secondnum = atoi(argv[2]);
	result = firstnum * secondnum;

	printf("%d", result);

	return (0);

}
