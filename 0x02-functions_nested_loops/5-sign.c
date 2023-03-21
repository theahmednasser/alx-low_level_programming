#include <stdio.h>
#include "main.h"

/**
 * print_sign - function that prints sign of a given input
 *
 * @n: integer input
 *
 * Return: 1 if n is +ve, 0 if n is zero and x if n is -ve
 */

int print_sign(int n)
{
	int x = -1;

	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	if (n < 0)
	{
		return (x);
		_putchar('-');
	}
}
