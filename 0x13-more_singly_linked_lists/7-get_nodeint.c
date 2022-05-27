#include "lists.h"

/**
 * get_nodeint_at_index - Function return number of the list
 * @head: head nodes
 * @index: index of the node
 * Return: list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int x;

	if (!head)
		return (0);
	for (x = 0; new; x++)
	{
		if (x == index)
			return (new);
		new = new->next;
	}
	return (NULL);
}
