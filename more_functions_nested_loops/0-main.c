#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 *@c: a char parameter.
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
