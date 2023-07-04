#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 * Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	temp = *head;

	if (temp == NULL)
		return (0);

	*head = temp->next;
	a = temp->n;
	free(temp);
	return (a);
}
