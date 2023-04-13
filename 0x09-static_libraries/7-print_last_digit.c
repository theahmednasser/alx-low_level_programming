#include<stdio.h>
#include"main.h"
/**
 * print_last_digit - takes one int parameter
 * Description: prints alphabet in small letters
 *
 * @n : check n
 * Return: int Always
*/
int print_last_digit(int n)
{
	if (n == -2147483648)
		n = 8;

	if (n < 0)
		n = n * -1;

	_putchar((n % 10) + '0');
	return (n % 10);
}
