#include "main.h"
/**
 * rev_string - used to reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char tem;

	for (i = 0; s[i] != '\0'; ++i)
		;
	for (j = 0; j < i / 2; j++)
	{
		tem = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = tem;
	}
}
