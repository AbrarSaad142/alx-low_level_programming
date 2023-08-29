#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *listint_len - this finction to print the number of the elements.
 * @h: this is the list.
 * Return: return with the number of element in the list.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t n = 0;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		n++;
	}

	return (n);
}
