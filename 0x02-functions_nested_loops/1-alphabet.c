#include "main.h"
/**
 * print_alphabet - Print the alphabets
 *
 * Return: Always (success)
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
