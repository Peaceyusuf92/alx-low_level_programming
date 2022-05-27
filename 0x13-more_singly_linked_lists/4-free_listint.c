#include "lists.h"

/**
 * free_listint - Function to free a list
 * @head: pointer
 * Return: nil
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
