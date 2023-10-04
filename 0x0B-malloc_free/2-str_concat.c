#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if  failure, otherwise a new pointer.
 */
char *str_concat(char *s1, char *s2)
{
	char *cstr;
	int i, ci, len;

	ci = 0;
	len = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] || s2[i])
	{
		len++;
		i++;
	}
	cstr = malloc(sizeof(char) * len);
	if (cstr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i])
	{
		cstr[ci++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		cstr[ci++] = s2[i];
		i++;
	}
	return (cstr);
}
