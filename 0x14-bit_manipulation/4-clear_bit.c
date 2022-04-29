#include "main.h"
/**
 * clear_bit - sets the value of bit to be 0
 * @n: pointer of an unsigned int
 * @index: index of a bit
 * Return: 1 if worked, -1 if it didn't
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
