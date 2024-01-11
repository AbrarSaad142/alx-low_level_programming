#include "lists.h"
#include <stdlib.h>

/**
* sum_dlistint- adds a new node at the end .
* @head: Head of the list.
* Return:  the sum of all the data (n) of a dlistint_t linked list.
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
