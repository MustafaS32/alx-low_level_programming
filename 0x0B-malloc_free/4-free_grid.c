#include "main.h"

/**
 * free_grid - free grid
 *
 * @grid: the array to free
 * @height: grid hight
 *
 * Return: none
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
