#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int a, si;
	char *mi;

	si = 0;
	a = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[si] != '\0')
	{
		;
		si++;
	}
	mi = malloc(si * sizeof(*str) + 1);

	if (mi == 0)
	{
		return (NULL);
	}
	else
	{
		while (a < si)
		{
			mi[a] = str[a];
			a++;
		}
	}
	return (mi);
}
