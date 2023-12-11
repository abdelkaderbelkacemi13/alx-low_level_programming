#include "main.h"

/**
 * _putchar - write the character put
 * @c: The character that we will print.
 * Return: Always 0 (Success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _islower - check for lowercase character
 * @low: the character to check
 * Return: 1 if low is lowercase, 0 if otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
/**
 * _abs - computes the absolute value of an integer
 * @n: the int that will check
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (-n);
}
/**
 * _isupper - used to chech if c is upper
 * @c: an alphabet
 * Return: 1 if true and 0 if not
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
/**
 * _isdigit - checks if c is a number between 0 & 9
 * @c: c is the input
 * Return: 1 if is a number, 0 otherwise
*/
int _isdigit(int c)
{
		if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/**
 * _strlen - used to a length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		++i;
	return (i);
}
/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
/**
 * *_strcpy - copies the string pointed to by src
 *  including the terminating null byte (\0)
 *  and  to the buffer pointed to by dest.
 *  @dest: pointer to the buffer in which we copy the string
 *  @src: string to be copied
 *  Return: dest's pointer
*/
char *_strcpy(char *dest, char *src)
{
int i = -1;

do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	unsigned int a = 0;
	int sing = 1;

	do {
		if (*s == '-')
			sing *= -1;
		else if (*s >= '0' && *s <= '9')
			a = (a * 10) + (*s - '0');
		else if (a > 0)
			break;
	} while (*s++);
	return (a * sing);
}
/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
/**
 * _strncat -  a function that concatenates two strings.
 * @n: number of bytes
 * @dest: destination string
 * @src: source
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0;  dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strncpy - a function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: negative if s1 < s2, 0 if s1 == s2,
 * positive 0 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/**
 * *_memset - fills memory with constant
 * @s: memory area
 * @b: constant to fill the memory
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
/**
 * *_memcpy - a function that copies memory area
 * @dest: destination memory area
 * @src: source of memory
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/**
 * *_strchr - Returns a pointer to the first occurrence of the character a str
 * @s: string to search in.
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if is not found
 */
char *_strchr(char *s, char c)
{
	int aa;

	aa = 0;
	while (s[aa] >= '\0')
	{
		if (s[aa] == c)
		{
			return (s + aa);
		}
		aa++;
	}
	return ('\0');
}
/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to get length
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, d;

	c = 0;
	a = 0;
	while (s[a] != '\0')
	{
		d = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				d = 1;
			}
		}
		if (d == 0)
		{
			return (c);
		}
		a++;
	}
	return (0);
}
/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *s != '\0'; a++)
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (*s == accept[b])
			{
				return (s);
			}
			b++;
		}
		s++;
	}
	return (NULL);
}
/**
 * *_strstr - a function that locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (!needle[j])
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
