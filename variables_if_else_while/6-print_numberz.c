#include <stdio.h>

/**
*main - Entry point
*
*main function prints the full lowercase alphabet and
*uppercase alphabet and a new line.
*
* Return: always 0 (success)
*/
int main(void)
{
int i;
for (i = 48 ; i <= 57 ; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
