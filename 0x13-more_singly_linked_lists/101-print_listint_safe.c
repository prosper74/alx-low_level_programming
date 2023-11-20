#include "lists.h"

/**
* print_listint_safe - Function that prints a listint_t linked list.
* @head: A pointer to the listint_t list head.
*
* Return: The number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
size_t count = 0, i;
const listint_t **list = NULL;

while (head != NULL)
{
	for (i = 0; i < count; i++)
	{
	if (head == list[i])
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		return (count);
	}
	}

	printf("[%p] %d\n", (void *)head, head->n);
	count++;
	list = realloc(list, count * sizeof(listint_t *));

	if (list == NULL)
	exit(98);

	list[count - 1] = head;
	head = head->next;
}
free(list);
return (count);
}

