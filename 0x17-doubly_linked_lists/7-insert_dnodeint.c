#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value to be assigned to the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int count = 0;
	
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	
	new_node->n = n;
	if (*h == NULL && idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL && idx != 0)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = temp;
	new_node->next = (temp != NULL) ? temp->next : NULL;
	
	if (temp != NULL)
		temp->next = new_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	if (idx == 0)
		*h = new_node;
	return (new_node);
}
