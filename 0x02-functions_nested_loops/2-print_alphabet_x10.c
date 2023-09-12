#include "main.h"

/**
 * print_alphabet_x10 - is a function that use _putchar to print the alphabet
*/
void print_alphabet_x10(void)
{
	int ka, alpha;



	for (ka = 0; ka < 10; ka++)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
