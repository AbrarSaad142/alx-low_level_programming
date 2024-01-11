#include "lists.h"
#include <stdlib.h>

/**
* get_dnodeint_at_index - adds a new node at the end .
* @head: Head of the list.
* @index: is the index of the node
* Return: the nth node of a dlistint_t linked list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *current = head;

for (i = 0; current != NULL && i < index; i++)
{
current = current->next;
}
if (i < index || current == NULL)
{
	return (NULL);
}
return (current);

}
