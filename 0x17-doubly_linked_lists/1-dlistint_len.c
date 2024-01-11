#include "lists.h"
/**
* dlistint_len - prints number of elements.
* @h: Head of the list
* Return: the number of elements in a linked
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);

}
