#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_listint - frees a listint_t list.
 *@head: the first node in the list.
 *Return: no return.
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_listint(head->next);
	free(head);
}

