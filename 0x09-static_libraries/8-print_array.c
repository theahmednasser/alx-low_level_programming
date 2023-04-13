#include <stdio.h>
#include <string.h>
/**
 * print_array - updates the value of a pointer to 98
 * @a: a pointer
 * @n: sd
 *
 *
 * Return: void ALWAYS
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
