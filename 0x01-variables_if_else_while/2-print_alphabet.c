#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:'alphabet list using putchar'
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int alphabet = 'a';

for (; 'z' >= alphabet;)
{
	putchar(alphabet);
	alphabet++;
}
putchar('\n');
return (0);
}
