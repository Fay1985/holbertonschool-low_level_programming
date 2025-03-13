#include <stdlib.h>

/**
 *_strdup - a function that duplicates a string.
 *@str: the string to copy.
 *Return: it returns the copied value.
 */


char *_strdup(char *str) {
char *dup_str;
unsigned int i, j;

if (str == NULL)
return NULL;

/* Find the length of the string */
i = 0;
while (str[i] != '\0') {
i++;
}

/* Allocate memory for the new string */
dup_str = (char *)malloc((i + 1) * sizeof(char));
if (dup_str == NULL)
return NULL;

/* Copy the string into the new allocated space */
for (j = 0; j < i; j++) {
dup_str[j] = str[j];
}

/* Null-terminate the new string */
dup_str[i] = '\0';

return dup_str;
}
