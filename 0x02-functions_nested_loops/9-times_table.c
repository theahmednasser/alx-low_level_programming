#include <stdio.h>
#include "main.h"

/**
 * times_table - function that prints the times table
 *
 * Return - void
 */

void times_table(void)
{
	int i, j, prdt;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			prdt = i * j;
			printf("%d, ", prdt);
		}
		_putchar('\n');
	}
}
