#include <stdio.h>
#include "main.h"

/**
 * _abs - function that returns the absolute value of given input
 *
 * @n: integer input
 *
 * Return: n if the number is already positive, or -n if n is -ve
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
