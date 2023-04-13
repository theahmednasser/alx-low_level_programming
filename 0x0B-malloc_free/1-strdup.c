#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - updates the value of a pointer to 98
 * @str: a pointer
 * Return: char * ALWAYS
 */
char *_strdup(char *str)
{
	int cnt, i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;

	ptr = ((char *)malloc((cnt + 1) * sizeof(char)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= (int)cnt; i++)
		ptr[i] = str[i];
	return (ptr);
}
