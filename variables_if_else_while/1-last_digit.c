#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * main function assigns a random number to n.
 * Prints n.
 *
 * Return: always 0 (success)
 */

int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
if (l > 5)
printf("Last digit of %d is %d and is greater than %d\n", n, l, 5);
else if (lastDigit == 0)
	printf("Last digit of %d is %d and is %d\n", n, l, 0);
else if (lastDigit < 6 && lastDigit != 0)
	printf("Last digit of %d is %d and is less than %d and not %d\n", n, l, 6, 0);
	return (0);
}
