#include "main.h"

/**
 *
 *isalpha - function checks if alpha or number
 *
 *
 */

int _isalpha(int c)
{
	if ((c <='z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar(10);
}
