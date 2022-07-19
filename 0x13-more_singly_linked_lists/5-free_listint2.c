#include "lists.h"

/**
*free_listint2 - frees a linked list.
*@head - head of a list
*
*Return: no return
*/

void free_listint2(listint_t **head)
{
listint_t *momo;
listint_t *blorwh;

if (head != NULL)
{
blorwh = *head;
		while ((momo = blorwh) != NULL)
		{
			blorwh = blorwh->next;
			free(momo);
		}
		*head = NULL;
	}
}

