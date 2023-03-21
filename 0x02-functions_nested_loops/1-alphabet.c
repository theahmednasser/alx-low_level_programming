#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * print_alphabet - prints all letters in lowercase 
 *
 * Return: no return
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	printf("\n");
}
