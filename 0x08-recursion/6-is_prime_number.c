#include "main.h"

int helperFunction(int num, int i);

/**
 * is_prime_number - returns if a number is prime
 * @n: the number to be checked
 * Return: integer value
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}

/**
 * helperFunction - Check if number is prime
 * @num: the number
 * @i: the iteration times
 * Return: 1 for prime or 0 for composite
 */
int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
