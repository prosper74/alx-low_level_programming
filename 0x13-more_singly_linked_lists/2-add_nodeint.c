#include "lists.h"

/**
* add_nodeint - Prints all the elements of a list_t list.
* @head: A pointer to the listint_t list.
* @n: The data to add to the list
*
* Return: The new node or null on failure
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

if (new_node == NULL)
	return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}

