#include<stdio.h>
#include"main.h"
/**
 * jack_bauer - void parameter
 * Description: prints alphabet in small letters
 *
 * Return: void Always
*/
void jack_bauer(void)
{
	int i, j, fi, si, fj, sj;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			si = (i % 10) + 48;
			fi = ((i / 10) % 10) + 48;

			sj = (j % 10) + 48;
			fj = ((j / 10) % 10) + 48;

			_putchar(fi);
			_putchar(si);
			_putchar(':');
			_putchar(fj);
			_putchar(sj);
			_putchar('\n');
		}
	}
}
