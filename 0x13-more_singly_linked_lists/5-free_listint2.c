#include "lists.h"
/**
 * free_listint2 - free memory for listint_t list
 * @head: pointer to the listint_t to be freed
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
