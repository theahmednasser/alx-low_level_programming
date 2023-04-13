#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
