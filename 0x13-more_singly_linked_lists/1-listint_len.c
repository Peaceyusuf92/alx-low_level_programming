#include "lists.h"

/**
 * listint_len - Function returns length of list
 * @h: pointer
 * Return: size_t length of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
		h = h->next, x++;
	return (x);
}
