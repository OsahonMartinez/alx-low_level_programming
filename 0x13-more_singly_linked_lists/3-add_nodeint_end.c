#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * @head: pointer to pointer  of first element of list
 * @n: element to be added in the list
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node-next = NULL;

	/* if head is a Null pointer , assign a new node to it */
	if (*head == NULL)
		*head = new_node;

	else
	{
		last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
	}

	return (new_node);
}
