#include "lists.h"

/**
 * pop_listint - Function that deletes the head node
 * @head: head node
 * Return: head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	int z;

	if (!*head)
		return (0);

	z = (*head)->n;
	*head = new->next;
	free(new);
	return (z);
}
