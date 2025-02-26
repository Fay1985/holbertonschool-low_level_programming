#include "main.h"
#include <stdio.h>

/**
 * _strcpy - check the code.
 *@dest: destination string.
 *@src: source string.
 *Return: returns destination file.
 */

char *_strcpy(char *dest, char *src)
{
char *temp = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (temp);
}
