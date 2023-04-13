#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_grid - updates the value of a pointer to 98
 * @grid: a pointer
 * @height: sdsd
 * Return: char * ALWAYS
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
