#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node
* at a given position in a dlistint_t list
* @head: Pointer to the pointer of the head of the doubly linked list
* @index: Index of the node that should be deleted (starting from 0)
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int i;

if (*head == NULL)
	return (-1);

if (index == 0)
{
	temp = *head;
	*head = (*head)->next;
	if (*head != NULL)
	(*head)->prev = NULL;
	free(temp);
	return (1);
}

current = *head;
for (i = 0; i < index && current != NULL; i++)
	current = current->next;

if (current == NULL)
	return (-1);

current->prev->next = current->next;
if (current->next != NULL)
	current->next->prev = current->prev;

free(current);
return (1);
}

