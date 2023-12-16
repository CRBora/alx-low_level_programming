#include "lists.h"

/**
 * sum_dlistint - function that returns sum of all data in list
 * @head: pointer to head node
 *
 * Return: sum of all the data of list, 0r 0 if list empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
