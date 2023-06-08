#include "main.h"

/**
 * _strlen_recursion - returns lenth of string
 * @s: pointer to a string
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
