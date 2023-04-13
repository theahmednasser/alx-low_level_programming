#include<stdio.h>
#include"main.h"
/**
 * times_table - void parameter
 * Description: prints alphabet in small letters
 *
 * Return: void Always
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i * j <= 9 && j != 0)
				_putchar(' ');

			if (i * j > 9)
			{
				_putchar((((i * j) / 10) % 10) + 48);
			}
			_putchar(((i * j) % 10) + 48);
		}
		_putchar('\n');
	}
}
