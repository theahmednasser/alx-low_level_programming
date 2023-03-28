#include <stdio.h>
#include <string.h>
/**
 * print_rev - updates the value of a pointer to 98
 * @s: a pointer
 *
 * Return: void ALWAYS
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	for (i = i - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
