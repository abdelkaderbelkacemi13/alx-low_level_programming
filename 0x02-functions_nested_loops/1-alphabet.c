#include "main.h"

/**
 * print_alphabet - it is a function that use _putchar to print the alphabet
*/
void print_alphabet(void)
{
	int alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putshar('\n');
}
