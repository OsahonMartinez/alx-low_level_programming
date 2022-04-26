#include "lists.h"
/**
 * get_nodeint_ata-index - returns nth node of a linked list
 * @head: pointer to first element
 * @index: index of node
 * Return: nth node, NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
