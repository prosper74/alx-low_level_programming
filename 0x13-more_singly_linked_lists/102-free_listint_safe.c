#include "lists.h"

/**
* free_listint_safe - Function that frees a listint_t list.
* This function can free lists with a loop
* You should go though the list only once
* @h: A pointer to the listint_t list head.
*
* Return: The size of the list that was free’d
*/

size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current_node = *h, *next_node;

while (current_node != NULL)
{
	next_node = current_node->next;
	free(current_node);
	current_node = next_node;
	count++;

	if (current_node == *h)
	{
	*h = NULL;
	break;
	}
}

return (count);
}

