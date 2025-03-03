#include "main.h"

/**
*_memcpy - The _memcpy() function copies n bytes from memory area
*src to memory area dest
*@dest: pointer to memory
*@src: value
*@n: number of bytes to fill
*Return: dest new value.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int count;
for ( count =0; count < n; count++)
{
dest[count] = src[count];
}

return (dest);
}
