#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that prints the last digit of given input
 *
 * @n: integer input
 *
 * Return: the last digit of x
 */

int print_last_digit(int n)
{
	int x = n % 10;

	printf("%d", x);
	return (x);
}
