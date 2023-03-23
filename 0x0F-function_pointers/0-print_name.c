#include "function_pointers.h"
#include<stdlib.h>
/**
 * print_name - prints a name
 * @name: The name
 * @f: pointer to the function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
