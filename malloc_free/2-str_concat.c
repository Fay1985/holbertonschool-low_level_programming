#include <stdlib.h>

/**
*str_concat- it concatenates two strings.
*@s1: first string to concatenate.
*@s2: second string to concatenate
*Return: the concatenated strings.
 */

char *str_concat(char *s1, char *s2) {
    char *result;
    unsigned int len1 = 0, len2 = 0, i, j;

    /* Handle NULL inputs */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Find the length of s1 */
    while (s1[len1] != '\0') {
        len1++;
    }

    /* Find the length of s2 */
    while (s2[len2] != '\0') {
        len2++;
    }

    /* Allocate memory for the new string */
    result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (result == NULL)
        return NULL;

    /* Copy the contents of s1 into result */
    for (i = 0; i < len1; i++) {
        result[i] = s1[i];
    }

    /* Copy the contents of s2 into result */
    for (j = 0; j < len2; j++) {
        result[i + j] = s2[j];
    }

    /* Null-terminate the resulting string */
    result[i + j] = '\0';

    return result;
}
