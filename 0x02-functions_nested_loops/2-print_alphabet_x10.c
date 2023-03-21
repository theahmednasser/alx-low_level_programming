#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - fucntion that prints lowercase alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; 1 <= 9; i++)
	{
		for (j = 97; j <= 122; j++)
			_putchar(j);
		printf("\n");
	}
}
