#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer
 * @sqr: the square root
 * Return: square root of n
*/
int square(int n, int sqr);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square(n, 1));
}

/**
 * square - a helper function to find the suqare root
 * @n: integer
 *@sqr: the square root
 *Return: square root
 */
int square(int n, int sqr)
{
	if (sqr * sqr == n)
	{
		return (sqr);
	}
	else if (sqr * sqr < n)
	{
		return (square(n, sqr + 1));
	}
	else
	{
		return (-1);
	}
}


