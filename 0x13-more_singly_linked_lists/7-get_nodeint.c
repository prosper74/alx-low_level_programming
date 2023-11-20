#include "lists.h"

/**
* get_nodeint_at_index - Function that deletes the head node and
* return the remianing nodes of the list
* @head: A pointer to the listint_t list head.
* @index: The index of the node to return
*
* Return: The index of the node or null
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current_node = head;
unsigned int count = 0;

while (current_node != NULL)
{
	if (count == index)
	return (current_node);

	count++;
	current_node = current_node->next;
}

return (NULL);
}

