#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * create_array - updates the value of a pointer to 98
 * @size: a pointer
 * @c: ss
 * Return: char * ALWAYS
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size < 1)
		return (NULL);

	ptr = ((char *)malloc(size * sizeof(char)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (int)size; i++)
		ptr[i] = c;
	return (ptr);
}
