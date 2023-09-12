#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int C)
{
	if (C >= 'a' && C <= 'z')
		return (1);
	if (C <= 'A' && C >= 'Z')
		return (1);
	return (0);
}
