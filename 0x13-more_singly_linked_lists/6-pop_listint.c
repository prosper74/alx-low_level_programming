#include "lists.h"

/**
* pop_listint - Function that frees the list and make the head = null
* @head: A pointer to the listint_t list head.
*
* Return: A pointer to the head of the list or 0 if Null
*/

int pop_listint(listint_t **head)
{
listint_t *temp;
int data;

if (*head == NULL)
	return (0);

data = (*head)->n;

temp = *head;
*head = (*head)->next;
free(temp);
return (data);
}

