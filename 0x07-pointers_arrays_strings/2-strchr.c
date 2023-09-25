#include "main.h"

/**
 * *_strchr - Returns a pointer to the first occurrence of the character a str
 * @s: string to search in.
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if is not found
 */
char *_strchr(char *s, char c)
{
	int aa;

	aa = 0;
	while (s[aa] >= '\0')
	{
		if (s[aa] == c)
		{
			return (s + aa);
		}
		aa++;
	}
	return ('\0');
}
