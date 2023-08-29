#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - this finction to print all element in the list listint_t.
 * @h: this is the list.
 * Return: return with the number of nodes.
 */

size_t print_listint(const listint_t *h)
{

	const listint_t *tmp;
	size_t n = 0;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		printf("%i\n", tmp->n);
		n++;
	}

	return (n);
}
