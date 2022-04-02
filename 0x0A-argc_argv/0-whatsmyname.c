#include <stdio.h>
/**
 * main - prints the name of this program
 * @argc: counts number of arguments
 * @argv: stores arguments passed in the command line
 * Return: 0 on success
 */
int main(int argc, char *argv)
{
	printf("%d\n", argc);

	printf("%s\n", argv[0]);
	return (0);
}
