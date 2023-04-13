#include <stdio.h>
#include <string.h>
/**
 * puts2 - updates the value of a pointer to 98
 * @s: a pointer
 *
 * Return: void ALWAYS
 */
void puts2(char *s)
{
	int i, sz;

	i = 0;
	while (s[i] != '\0')
		i++;

	sz = i;
	for (i = 0; i < sz; i++)
	{
		if (i % 2 == 0)
			putchar(s[i]);
	}
	putchar('\n');
}
