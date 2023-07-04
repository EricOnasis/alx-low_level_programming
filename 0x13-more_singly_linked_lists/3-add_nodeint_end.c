#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tempNode;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr->n = n;
		if (*head == NULL)
		{
			ptr->next = NULL;
			*head = ptr;
		}
		else
		{
			tempNode = *head;
			while (tempNode->next)
			{
				tempNode = tempNode->next;
			}
			tempNode->next = ptr;
		}
	}
	return (ptr);
}

