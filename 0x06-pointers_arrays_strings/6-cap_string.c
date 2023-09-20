#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to change
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i, j;
	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		j = 0;
		while (j < 13)
		{
			if (s[i] == spe[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
			}
			j++;
		}
		i++;
	}
	return (s);
}
