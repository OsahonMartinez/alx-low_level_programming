#include <main.h>
#include <stdio.h>
/**
 * leet - Encode string into 1337
 * @s: string
 *
 * Return: the string
 */

char *leet(char *s)
{
	int a = 0, b = 0, l = 5;
	char r[5] = {'A', 'E', '0', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < l)
		{
			if (s[a] == r[b] || s[a] -32 == r[b])
			{
				s[a] =n[b];
			}

			b++;
		}

		a++;
	}

	return (s);
}
