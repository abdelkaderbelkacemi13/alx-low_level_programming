#include <stdio.h>
/**
 *main - Entry point
 *
 * Description: 'printing hexadicimal system'
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int number = 0;
	char hex = 'a';

	for (; number < 10 ; )
	{
		putchar(number + '0');
		number++;
	}
	for ( ; hex <= 'f' ;)
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
