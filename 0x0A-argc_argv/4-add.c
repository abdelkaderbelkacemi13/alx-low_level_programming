#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: intiger
 * @argv: Arry name
 *
 * Return: 1 If a non integer is in the list, otherwise 0
 */
int main(int argc, char *argv[])
{
	int num, num2, sum;

	num = 1;
	while (num < argc)
	{
		num2 = 0;
		while (argv[num][num2])
		{
			if (argv[num][num2] < '0' || argv[num][num2] > '9')
			{
				printf("Error\n");
				return (1);
			}
			num2++;
		}
		sum += atoi(argv[num]);
		num++;
	}
	printf("%d\n", sum);
	return (0);
}
