#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to pointer of head node
 *
 * Return: 0 if lists is empty
 * headnode data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int removed = 0;

	if (*head == NULL)
		return (removed);

	if (*head == NULL)
		return (removed);

	temp = *head;
	removed = temp->n;

	*head = (*head)->next;
	free(temp);

	return (removed);
}
