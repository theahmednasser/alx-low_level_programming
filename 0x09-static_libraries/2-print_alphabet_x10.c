#include<stdio.h>
#include"main.h"
/**
 * print_alphabet_x10 - void parameters
 * Description: prints alphabet in small letters
 * Return: void Always
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(i + 'a');
		}
		_putchar('\n');
	}
}
