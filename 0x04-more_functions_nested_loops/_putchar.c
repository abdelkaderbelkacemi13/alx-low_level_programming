#include <unistd.h>
#include "main.h"
/**
 * _putchar - write the character put
 * @put: The character that we will print.
 * Return: Always 0 (Success)
*/

int _putchar(char put)
{
	return (write(1, &put, 1));
}

