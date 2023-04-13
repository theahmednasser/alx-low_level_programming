#include<stdio.h>
#include"main.h"
/**
 * print_sign - takes one int parameter
 * Description: prints alphabet in small letters
 *
 * @n : check n
 * Return: int Always
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
