#include "main.h"

/*
 *
 *
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
{
unsigned int count = 0;
while(count < n)
{
_putchar((*s + count) * b);
count++;
}
_putchar('\n');
return (s);
}
}
