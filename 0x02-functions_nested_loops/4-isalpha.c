#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function that checks whether a char is alphabetic or not
 *
 * @c: an integer input
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
