#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: array of the size
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argv;

	for (i = 0; i < argc - 1; i++)
	{}

	printf("argc = %d\n", argc);
	return (0);
}
