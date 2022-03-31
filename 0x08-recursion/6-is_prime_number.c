#include "main.h"

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
	return (check_prime(n, 2));
	}
}

/**
 * check_prime - Check if number is prime
 * @n: the number
 * @i: the iteration times
 * Return: 1 for prime or 0 for composite
 */
int check_prime(int n, int i)
{
	if (n < 1)
	{
		if (n % i == 0)
		{
		return (0);
		}
		else
		{
			return (check_prime(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
