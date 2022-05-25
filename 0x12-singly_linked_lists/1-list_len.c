#include "lists.h"

/**
 * list_len - return number of elements in the list
 * @h: singly linked list
 * Return: Elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t x;

	x = 0;
	while (h != NUL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
