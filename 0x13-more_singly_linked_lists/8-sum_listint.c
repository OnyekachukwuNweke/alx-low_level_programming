#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of linked list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum_node = 0;

	if (head == NULL)
	{
		free(current);
		return (0);
	}

	current = head;

	while (current != NULL)
	{
		sum_node += current->n;
		current = current->next;
	}

	return (sum_node);
}
