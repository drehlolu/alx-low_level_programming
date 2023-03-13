#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D array of integers
 * @grid: pointer to the 2D array
 * @height: height of the array
 *
 * Description: Frees the memory allocated for the 2D array.
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
