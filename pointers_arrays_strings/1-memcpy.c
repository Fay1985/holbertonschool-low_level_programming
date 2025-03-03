#include "main.h"

/**
 * _memcpy - a function that copies memory.
 *
 *@dest:a parameter to hold destination copy
 *@src:a memory to hold source of the copy
 *@n: to hold the number of bytes that are copied
 *Return: it returns the destination copy that was copied from source.
 */




char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int count;
for ( count =0; count < n; count++)
{
	src[count] = dest[count];
}

return (dest);
}
