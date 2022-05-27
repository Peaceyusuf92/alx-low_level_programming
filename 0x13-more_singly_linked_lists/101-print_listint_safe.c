#include "lists.h"

/**
 * print_listint_safe - print lists
 * @head: head
 * Return: x
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x = 0;
	const listint_t *temp, *node;

	node = head;
	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		temp = node;
		node = node->next;
		x++;
		if (temp <= node)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
	}
	return (x);
}
