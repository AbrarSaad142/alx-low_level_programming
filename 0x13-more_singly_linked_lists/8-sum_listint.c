#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the
 *               data (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the list is empty - 0.
 *         Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	for (tmp = head; tmp != NULL; tmp = tmp->next)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

