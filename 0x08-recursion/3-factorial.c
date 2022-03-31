#include "main.h"
/**
 * factorial - returns factoria; of a given number
 * @n: a number to find the factorial
 * Return: factorial of number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
