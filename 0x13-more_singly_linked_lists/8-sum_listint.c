#include "lists.h"

/**
 * sum_listint - Function that sum lists
 * @head: head node
 * Return: add
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			add += head->n;
			head = head->next;
		}
		sum += head->n;
		return (add);
	}
	return (add);
}
