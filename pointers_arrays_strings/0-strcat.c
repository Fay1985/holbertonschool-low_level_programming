#include "main.h"

/*
 * _strcat - function that concatenates
 *@dest : destination
 *@src: the source one
 *Return: non return
 */

char *_strcat(char *dest, char *src)
{
	int i =0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
