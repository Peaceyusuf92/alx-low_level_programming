#include "lists.c"
/**
 * print_list - print all element of a list
 * @h: singly linked list
 * Return: number of listed element
 */
size_t print_list(const list_t *h)
{
	size_t x;

	x = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}
	return (x);
}
