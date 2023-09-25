#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int num, num1;

	num = 0;
	num1 = 0;
	for (i = 0; i < size; i++)
	{
		num += a[(size * i) + i];
		num1 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", num, num1);
}

