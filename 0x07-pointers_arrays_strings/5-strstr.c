#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: pointer to a string
 * @needle: pointer to substring
 *
 * Return: pointer to beginning of located string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *needlestr = needle;

		while (*needlestr && *haystack && *haystack == *needlestr)
		{
			haystack++;
			needlestr++;
		}

		if (!*needlestr)
		{
			return (start);
		}

		haystack = start + 1;
	}
	return (0);
}
