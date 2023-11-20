#include "lists.h"

/**
* insert_nodeint_at_index - Function that inserts a new node
* at a given position.
* @head: A pointer to the listint_t list head.
* @idx: The index of the list where the new node should be added.
* Index starts at 0
* @n: The int to add in the node
*
* Return: The address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
listint_t *current_node;
unsigned int count;

if (new_node == NULL)
	return (NULL);

new_node->n = n;

if (idx == 0)
{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

current_node = *head;
count = 0;

while (current_node != NULL)
{
	if (count == idx - 1)
	{
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
	}

	count++;
	current_node = current_node->next;
}

free(new_node);
return (NULL);
}

