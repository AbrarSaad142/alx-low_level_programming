#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - adds a new node at the end .
* @head: Head of the list.
* @n: number of elements of list.
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
	return (NULL);
}
	new_node->n = n;
	new_node->next = NULL;

if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (*head);
}
else
{
dlistint_t *last = *head;

while (last->next != NULL)
{
	last = last->next;
}
new_node->prev = last;
last->next = new_node;
}
return (new_node);
}
