#include "main.h"
/**
 * divided - divisors
 * @n: int
 * @m: int
 * Return: bool
 */
int divided(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divided(n + 2, m));
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - check if  integer is a prime number
 * @n: int
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divided(3, n));
	}
}
