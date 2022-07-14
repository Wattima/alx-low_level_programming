#include "lists.h"
/**
 * print_list - prints all elements of a list
 * @h: the pointer that points to the struct.
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		len++;
		h = h->next;
	}
	return (len);
}
