#include <stdio.h>

/**
 * main - Entry point
 *
 * main function prints the full alphabet and a new line.
 *
 * Return: always 0 (success)
 */

int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
