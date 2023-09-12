#include "main.h"

/**
 * print_alphabet - it is a function that use _putchar to print the alphabet
*/
void print_alphabet(void)
{
	int alpha;

	alpha = 'a';


	for (int k = 0; k < 10; k++)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
	_putchar('\n');
	}
}
