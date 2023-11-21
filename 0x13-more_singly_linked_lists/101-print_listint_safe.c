#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list safely.
* @head: A pointer to the listint_t list head.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current_node = NULL;
const listint_t *check_node = NULL;
size_t counter = 0, i;

current_node = head;

while (current_node)
{
	printf("[%p] %d\n", (void *)current_node, current_node->n);
	counter++;
	current_node = current_node->next;
	check_node = head;

	for (i = 0; i < counter; i++)
	{
	if (current_node == check_node)
	{
		printf("-> [%p] %d\n", (void *)current_node, current_node->n);
		return (counter);
	}
	check_node = check_node->next;
	}

	if (!head)
	exit(98);
}

return (counter);
}

