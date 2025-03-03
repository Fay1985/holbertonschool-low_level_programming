#include "main.h"

/*
 *
 *
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int count = 0;
while(count < n)
{
if (n < 1)
{
return 0;
}
_putchar((*s + count) * b);
count++;
}
return (0);
}
