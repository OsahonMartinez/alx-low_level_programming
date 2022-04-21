#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_lists - prints the lists of elements
 * @h: pointer to the listd
 * if str is NULL print [0] (nil)
 * Return: The number of nodes
 */
size_t print_lists(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d], %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d], %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
