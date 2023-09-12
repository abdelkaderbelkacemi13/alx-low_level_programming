#include "main.h"
/**
 * main - Entry point
 * Description: 'printing using _putchar prototype'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	ch = 0;
	while (ch < 8)
	{
		_putchar(str[ch]);
		ch++;
	}
	_putchar('\n');
	return (0);
}
