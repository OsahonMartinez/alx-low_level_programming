#include "main.h"
/**
 * _puts_recursion - prints a string following a new line
 * @s: a pointer to a string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base/main case */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s++);
}
