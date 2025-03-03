#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: The byte to fill memory with
 * @n: Number of bytes to fill
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int count = 0;

while (count < n)
{
s[count] = b;
count++;
}
return s;
}
