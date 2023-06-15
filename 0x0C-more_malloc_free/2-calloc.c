#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: The number of elements in the array
 * @size: The size of each element
 *
 * Return: The pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (ptr != NULL)
	{
		memset(ptr, 0, nmemb * size);
	}

	return (ptr);
}

