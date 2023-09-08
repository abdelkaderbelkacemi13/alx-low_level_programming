#include <stdio.h>
/**
 *main - Entry point
 *
 * Description: 'printing all the alphabet from z to a'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'z';

	for (; alphabet >= 'a' ;)
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
