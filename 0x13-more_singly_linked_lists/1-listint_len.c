#include "lists.h"

/**
* listint_len - Prints all the elements of a list_t list.
* @h: A pointer to the listint_t list.
*
* Return: The number of nodes in the list_t list.
*/

size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
	count++;
	h = h->next;
}
return (count);
}

