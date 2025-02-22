#include "main.h"

/**
* _isalpha - check if it is an alphanumeric charactere.
* @c: the charactere to be checked.
* Return: 1 if it's a lowercase - 0 if it's not a lowercase.
**/

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar(10);
}
