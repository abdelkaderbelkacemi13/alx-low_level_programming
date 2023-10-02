#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	unsigned int a = 0;
	int sing = 1;

	do {
		if (*s == '-')
			sing *= -1;
		else if (*s >= '0' && *s <= '9')
			a = (a * 10) + (*s - '0');
		else if (a > 0)
			break;
	} while (*s++);
	return (a * sing);
}
