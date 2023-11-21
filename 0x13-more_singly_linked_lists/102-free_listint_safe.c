#include "lists.h"

/**
* free_listint_safe - Function that frees a listint_t list.
* This function can free lists with a loop
* You should go though the list only once
* @head: A pointer to the listint_t list head.
*
* Return: The size of the list that was free’d
*/

size_t free_listint_safe(listint_t **head)
{
size_t length = 0;
listint_t *temp_node;
int difference;

if (!head || !*head)
	return (0);

while (*head)
{
	difference = *head - (*head)->next;
	if (difference > 0)
	{
	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;
	length++;
	}
	else
	{
	free(*head);
	*head = NULL;
	length++;
	break;
	}
}

*head = NULL;
return (length);
}

