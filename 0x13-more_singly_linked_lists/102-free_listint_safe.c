#include "lists.h"

/**
 * free_listint_safe - free lists
 * @h: head
 * Return: x
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t x = 0;

	temp = *h;
	if (h == NULL)
		return (x);
	while (temp)
	{
		if (temp <= temp->next)
		{
			free(temp);
			x++;
			break;
		}

		*h = temp->next;
		free(temp);
		temp = *h;
		x++;
	}
	*h = NULL;
	return (x);
}
