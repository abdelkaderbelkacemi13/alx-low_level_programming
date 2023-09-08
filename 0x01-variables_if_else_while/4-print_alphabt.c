#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int alphabet = 'a';
for (; 'z' >= alphabet;)
{
	if (alphabet == 'e' || alphabet == 'q')
		alphabet++;
	putchar(alphabet);
	alphabet++;
}
putchar('\n');
return (0);
}
