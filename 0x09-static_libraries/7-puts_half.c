#include <stdio.h>
#include <string.h>
/**
 * puts_half - updates the value of a pointer to 98
 * @s: a pointer
 *
 * Return: void ALWAYS
 */
void puts_half(char *s)
{
	int i, sz;

	i = 0;
	while (s[i] != '\0')
		i++;

	sz = i;
	for (i = ((sz - 1) / 2) + 1; i < sz; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
