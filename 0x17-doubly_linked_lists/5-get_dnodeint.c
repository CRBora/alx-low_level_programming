#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of list
 * @head: pointer to the head of the list
 * @index: node index, starting from 0
 *
 * Return: pointer to the nth node, or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
