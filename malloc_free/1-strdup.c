#include <stdlib.h>

/**
 *_strdup- a function that duplicates a string.
 *@str: the string to copy.
 *Return: it returns the copied value.
 */

char *_strdup(char *str)
{
char *dup_str;
unsigned int i, j;

if (str == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
{
i++;
}

dup_str = malloc(sizeof(i + 1));

if (dup_str == NULL)
{
return (NULL);
}
for (j = 0; j < i; j++)
{
dup_str[j] = str[j];
}

dup_str[i] = '\0';

return (dup_str);
}
