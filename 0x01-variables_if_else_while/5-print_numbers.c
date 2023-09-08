#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: 'printing all the number under 10'
 *
 *Return: Always 0 (Success)
*/

int main(void)
{
	int number = 0;

	for (; number < 10 ; )
	{
		printf("%i", number);
		number++;
	}
	printf("\n");
	return (0);
}
