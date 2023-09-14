#include <stdio.h>
#include "main.h"
/**
 * main - find the largest prime factor
 * Return: 0
 *
*/
int main(void)
{
	long int num, max;

	num = 612852475143;
	max = 2;
	while (max < num)
	{
		while (num % max == 0)
		{
			num = num / max;
		}
		max++;
	}
	printf("%ld", num);
	putchar('\n');
	return (0);
}
