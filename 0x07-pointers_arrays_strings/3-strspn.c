#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to get length
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, d;

	c = 0;
	a = 0;
	while (s[a] != '\0')
	{
		d = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				d = 1;
			}
		}
		if (d == 0)
		{
			return (c);
		}
		a++;
	}
	return (0);
}
