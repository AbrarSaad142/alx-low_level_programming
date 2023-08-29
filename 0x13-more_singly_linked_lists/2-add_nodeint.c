#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint - this finction to add a new node at the beginning of a list.
 * @head: this is a node we will add in the list.
 * @n: the value we add it in the list
 * Return: return with the address of an new element,if failed return null.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp != NULL)
	{
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	}
	return (tmp);

}
