#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_listint2 - frees a listint_t list.
 *@head: the first node in the list.
 *Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		current = *head;
		*head = (*(head))->next;
		free(current);
	}

	*head = NULL;
}


