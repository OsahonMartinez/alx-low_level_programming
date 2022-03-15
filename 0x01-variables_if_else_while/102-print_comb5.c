#include <stdio.h>
/**
 * main - Print combination of 2-2 digits
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	int c, i, j, k, op1, op2;

	c = i = j = k = 48;
	while (k < 58)
	{
		j = 48;
		while (j < 58)
		{
			i = 48;
			while (i < 58)
			{
				c = 48;
				while (c < 58)
				{
					op1 = (k * 10) + j;
					op2 = (i * 10) + c;
					if (op1 < op2)
					{
						putchar(k);
						putchar(j);
						putchar(' ');
						putchar(i);
						putchar(c);
						if (k == 57 && j == 56 && i == 57 && i == 57)
							break;
						putchar(',');
						putchar(' ');
					}
					c++;
				}
				i++;
			}
			j++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}

