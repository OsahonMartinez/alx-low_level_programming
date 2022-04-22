#include <stdlib.h>
#include "lists.h"
/**
 * free_list - list with one argument
 * @head: pointer to list_t
 * Return: NIL
 */
void free_list(list_t *head)
{
	list_t *cursor;

	while (head)
	{
		cursor = head->next;
		free(head->str);
		free(head);
		head = cursor;
	}
}
