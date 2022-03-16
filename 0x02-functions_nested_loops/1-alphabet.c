#include "main.h"
/**
 * main - Print the alphabets
 *
 * Return: Always (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');

	return (0);
}
