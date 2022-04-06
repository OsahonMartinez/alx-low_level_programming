#include "main.h"
#include <stdio.h>
/**
 * create_array - creates an array of char and initializes it with
 * a speccific char
 * @size: size of array
 * @c: char to initialize
 * Return: NULL if it fails or Pointer to array
 */
char *creatwe_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size); /* checks if malloc was successful */

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
