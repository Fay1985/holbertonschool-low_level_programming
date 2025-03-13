#include <stdlib.h>

/*
 *malloc_checked - it allocates memory.
 *@b: the number of memory to assign.
 *Return: returns a pointer.
 */

void *malloc_checked(unsigned int b) {
void *ptr = malloc(b);

if (ptr == NULL) {
exit(98);
}

return ptr;
}
