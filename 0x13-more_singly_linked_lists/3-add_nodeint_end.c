#include "lists.h"

/**
* add_nodeint_end - Function that adds a node at the end of the list
* @head: A pointer to the listint_t list head.
* @n: The data to add to the end of the list
*
* Return: The new node or null on failure
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
listint_t *last_node;

if (new_node == NULL)
	return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
	*head = new_node;
	return (new_node);
}

last_node = *head;

while (last_node->next != NULL)
	last_node = last_node->next;

last_node->next = new_node;
return (new_node);
}

