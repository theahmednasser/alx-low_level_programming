#include "main.h"
#include <stdio.h>

/**
 * main - prints the number from 1 - 100, but for mult of 3 & 5 print Fizz Buzz
 *
 * Return: Always 0 (Success)
**/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (!(i % 3 == 0 || i % 5 == 0))
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
