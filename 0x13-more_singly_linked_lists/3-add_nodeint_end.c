#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint_end - this finction to add a new node at the end of a list.
 * @head: this is a node we will add in the list.
 * @n: the value we add it in the list
 * Return: return with the address of an new element,if failed return null.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *lastNode;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	lastNode = *head;
	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}
	lastNode->next = new;
	return (*head);
}
