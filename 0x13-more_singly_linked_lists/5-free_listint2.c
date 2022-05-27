#include "lists.h"

/**
 * free_listint2 - Funtion to free a list when head is NULL
 * @head: pointer
 *Return: nil
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!head)
		return;
	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
