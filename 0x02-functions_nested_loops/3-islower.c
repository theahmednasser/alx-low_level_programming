#include <stdio.h>
#include "main.h"

/**
 * _islower - function that checks for lowercase characters
 *
 * @c: an integer
 *
 * Return: 1 (c is lowercase) or 0 (otherwise)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
