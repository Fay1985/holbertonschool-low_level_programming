#include "main.h"
/**
*is_prime_number - a function that returns 1 if the input is a prime number,
*also 0.
*@n: parameter for number
*Return:is_prime_number
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n == 2)
return (1);
return (prime(n, n / 2));
}
