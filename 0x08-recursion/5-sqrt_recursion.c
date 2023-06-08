#include "main.h"

/**
 * find_sqrt - finds sqroot of a number
 * @num: the number
 * @root: root to be tested
 * Return: sqroot value if the number has a a natural sqroot else -1.
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural sqroot
 * @n: the number
 * Return: int id the number has a natural sqroot, else -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
