#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a = 0, b = 0, c = 0, d = 0, len = 0, num = 0 ;
	
	for (len = 0; s[len] != '\0'; len++)
		;
	for (a = 0; a  < len && num == 0; a++)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] + '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
		}
	}
	if (d == 0)
		return (0);
	return (c);
}
