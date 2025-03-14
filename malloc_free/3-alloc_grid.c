#include <stdlib.h>

int **alloc_grid(int width, int height) {
 int **grid;
int i, j;

    /* Check if width or height is invalid */
if (width <= 0 || height <= 0)
        return NULL;

    /* Allocate memory for the grid (array of pointers) */
    grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL)
        return NULL;

    /* Allocate memory for each row in the grid */
    for (i = 0; i < height; i++) {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL) {
            /* Free previously allocated memory if allocation fails */
            for (j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }

        /* Initialize each element to 0 */
        for (j = 0; j < width; j++) {
            grid[i][j] = 0;
        }
    }

    return grid;
}
