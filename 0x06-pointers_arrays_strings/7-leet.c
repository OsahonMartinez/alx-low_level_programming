#include <stdio.h>

/**
 * leet - Encode string into 1337
 * @s: string
 * Return: the string
 */

char *leet(char *s)
{
	int i, j;
	char r[] = "aAeEoOtTlL";
	char n[] = "4433007711";

/* scan through string */
	i = 0
	while (s[i] != '\0')
/* check whether letters(char r) is found */
	{
		j = 0;

		while (j < 10)
		{
			if (r[j] == s[i])
			{
				s[i] = sn[j];
			}

			j++;
		}

		i++;
	}

	return (s);
}
