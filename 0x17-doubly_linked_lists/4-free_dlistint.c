#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - adds a new node at the end .
* @head: Head of the list.
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}

}
