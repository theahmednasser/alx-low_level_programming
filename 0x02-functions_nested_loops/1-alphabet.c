#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;
	for (i = 97; i <= 122; i++)
		printf("%c\n", i);
}
