#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'printing alphabets in uppercase and lowercase'
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
int alphabet = 'a';
int ALPHABET = 'A';

for (; 'z' >= alphabet;)
{
putchar(alphabet);
alphabet++;
}
while (ALPHABET <= 'Z')
{
putchar(ALPHABET);
ALPHABET++;
}
putchar('\n');
return (0);
}
