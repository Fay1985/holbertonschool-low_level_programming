#include <stdlib.h>

/*
 *free_grid - free used memory.
 *@grid: width of the grid.
 *@height: the height of the grid.
 *Return: free the memory.
 */
void free_grid(int **grid, int height) {
int i;

if (grid == NULL || height <= 0) {
return;
}
/* Free each row */
for (i = 0; i < height; i++) {
free(grid[i]);
}
/* Free the main array */
free(grid);
}
