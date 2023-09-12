#include "main.h"

/**
 * _islower - check for lowercase character
 * @low: the character to check
 * Return: 1 if low is lowercase, 0 if not
*/

int _islower(int low)
{
	if (low >= 97 && low <= 122)
		return (1);
	else
		return (0);
