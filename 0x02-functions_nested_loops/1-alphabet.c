#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints all letters in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	printf("\n");
}
