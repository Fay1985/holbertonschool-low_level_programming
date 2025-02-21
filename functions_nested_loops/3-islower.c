#include "main.h"
#include <ctype.h>
/**
 *int _islower(int c) - tells if the letter is lower or not
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
