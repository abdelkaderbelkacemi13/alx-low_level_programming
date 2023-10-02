#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: intiger
 * @argv: arry name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int nlin;

	for (nlin = 0; nlin < argc; nlin++)
	{
		printf("%s\n", argv[nlin]);
	}
	return (0);
}
