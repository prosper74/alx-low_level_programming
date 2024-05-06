#include "search_algos.h"

/**
* jump_list - Searches for a value in a singly linked list
*             using the Jump search algorithm.
*
* @list: Pointer to the head of the singly linked list.
* @size: Number of elements in the list.
* @value: Value to search for.
*
* Return: Pointer to the node containing the value if found, NULL otherwise.
*
* Description: Prints the values checked during the search process.
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t index, block_start, block_end;
listint_t *prev;

if (list == NULL || size == 0)
	return (NULL);

block_end = (size_t)sqrt((double)size);
index = 0;
block_start = 0;

do {
	prev = list;
	block_start++;
	index = block_start *block_end;

	while (list->next && list->index < index)
	list = list->next;

	if (list->next == NULL && index != list->index)
	index = list->index;

	printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

} while (index < size && list->next && list->n < value);

printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

for (; prev && prev->index <= list->index; prev = prev->next)
{
	printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
	if (prev->n == value)
	return (prev);
}

return (NULL);
}
