#include "main.h"
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to test
 * @prt: integer
 * Return: 1 if n is a prime number, 0 if not
 */

int prime(int n, int prt);
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - function used to test  if a number is prime not
 * @n: number to test
 * @prt: integer
 *
 * Return: 1 if n is a prime, 0 if not
 */

int prime(int n, int prt)
{
	if (prt >= n && n > 1)
	{
		return (1);
	}
	else if (n % prt == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, prt + 1));
	}
}
