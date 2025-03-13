#include <stdlib.h>

/**
 ** create_array - this function creates an array
 *@size: the wanted size of our array.
 *@c: The char we want to use.
 *Return: the wanted array
*/


#include <stdlib.h>

char *create_array(unsigned int size, char c) {
char *arr;
unsigned int i;

if (size == 0)
return NULL;

arr = malloc(size * sizeof(char));
if (arr == NULL)
return NULL;

for (i = 0; i < size; i++)
arr[i] = c;

return arr;
}
