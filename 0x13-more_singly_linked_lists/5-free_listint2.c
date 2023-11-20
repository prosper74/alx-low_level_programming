#include "lists.h"

/**
 * free_listint2 - Function that frees the list and make the head = null
 * @head: A pointer to the listint_t list head.
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node = *head;
	listint_t *next_node;

	if (head != NULL)
	{
		while (current_node != NULL)
		{
			next_node = current_node->next;

			free(current_node);
			current_node = next_node;
		}

		*head = NULL;
	}
}

