#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - updates the value of a pointer to 98
 * @s1: a pointer
 * @s2: a pointer
 * Return: char * ALWAYS
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *ptr;

	size1 = 0;
	if (s1 != NULL)
		while (s1[size1] != '\0')
			size1++;

	size2 = 0;
	if (s2 != NULL)
		while (s2[size2] != '\0')
			size2++;
	ptr = ((char *)malloc((size1 + size2 + 1) * sizeof(char)));
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL)
		for (i = 0; i < (int)size1; i++)
			ptr[i] = s1[i];

	if (s2 != NULL)
		for (i = 0; i <= size2; i++)
			ptr[i + size1] = s2[i];
	return (ptr);
}
