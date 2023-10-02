#include "main.h"

/**
 * _islower - check for lowercase character
 * @low: the character to check
 * Return: 1 if low is lowercase, 0 if otherwise
*/

int _islower(int low)
{
	if (low >= 'a' && low <= 'z')
		return (1);
	return (0);
}
