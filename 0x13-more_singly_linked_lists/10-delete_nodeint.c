#include "lists.h"

/**
*delete_nodeint_at_index - deletes the node at index
*@head: head of a list
*@index: index of a list, that should be deleted
*
*Return: 1, -1 if it fsils
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *new;
	listint_t *old;

	if (!head || !*head)
		return (-1);
	new = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		new = new->next;
		if (new == NULL)
			return (-1);
	}
	old = new->next;
	new->next = old->next;
	free(old);
	return (1);
}

