#include <stdio.h>
/**
 * main - Print combination of 2 digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, i;

	for (c == 48 ; c <= 57 ; c++)
	{
		for (i == 48 ; i <= 57 ; i++)
		{
			if (c <i)
			{
				putchar(c);
				putchar(i);

				if (c != 56 || (c == 56 && i != 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}



