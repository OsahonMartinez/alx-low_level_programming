#include "lists.h"
/**
 * free_list - frees a listint_t list
 * @head: pointer to first element
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
