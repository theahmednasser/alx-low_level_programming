#include <stdio.h>
#include <string.h>
/**
 * rev_string - updates the value of a pointer to 98
 * @s: a pointer
 *
 * Return: void ALWAYS
 */
void rev_string(char *s)
{
	int i, sz;
	char temp;

	i = 0;
	while (s[i] != '\0')
		i++;
	sz = i - 1;

	for (i = 0; i <= sz / 2; i++)
	{
		temp = s[sz - i];
		s[sz - i] = s[i];
		s[i] = temp;
	}

}
