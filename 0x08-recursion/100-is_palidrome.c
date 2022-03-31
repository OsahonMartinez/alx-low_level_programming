#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: pointer to string
 * Return: lenght of string
 */
int_strlen_recursion(char *s)
{
	if (*s)
	{
		return(1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * helperFunction - check if palidrome
 * @s: pointer to a string
 * @fi: first index
 * @li: last index
 * Return: 0 if not palidrom, 1 if palidrome
 */
int helperFunction(char *s, int fi, int li)
{
	if (fi < li && s[fi] == s[li])
	{
		return (helperFunction(s, fi + 1, li - 1));
	}
	if (s[fi] != s[li])
	{
		return (0);
	}
	return (1);
}

/**
 * is_palidrome - checks if string is palidrome or not
 * @s: pointer to string
 * Return: 1 if string is palidrome 0 if not palidrome
 */
int is_palidrome(char *s)
{
	int fi, li;

	fi = 0;
	li = _strlen_recursion(s) - 1;

	if (!*s)
		return (1);

	return (helperFunction(s, fi, li));
}
