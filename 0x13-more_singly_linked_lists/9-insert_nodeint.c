#include "lists.h"

/**
 * insert_nodeint_at_index - Function to insert node
 * @head: head
 * @idx: index
 * @n: integer
 * Return: listint
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *actualNodo = *head;
	unsigned int x = 0;

	if (!new)
		return (free(new), NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL && idx > 0)
	{
		free(new);
		return (NULL);
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (; x < idx - 1; x++)
	{
		actualNodo = actualNodo->next;
		if (actualNodo == NULL && idx - x > 0)
		{
			free(new);
			return (NULL);
		}
	}

	new->next = actualNodo->next;
	actualNodo->next = new;

	return (new);
}