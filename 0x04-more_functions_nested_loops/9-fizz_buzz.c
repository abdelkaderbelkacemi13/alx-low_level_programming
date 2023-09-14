#include <stdio.h>
/**
 * main -print numbers from 1 to 100
 *      followed by a new line.
 *      print Fizz instead of number 3 multiples.
 *      print BUzz instead of number 5 multiples.
 *      print FizzBuzz instead of both number 3 and 5 multiples.
 *	Return: always 0.
*/

int main(void)
{
	int number;

	number = 1;
	while (number < 100)
	{
		if (number % 3 == 0 && number % 5 != 0)
		{
			printf("Fizz");
		}
		else if (number % 5 == 0 && number % 3 != 0)
		{
			printf("Buzz");
		}
		else if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", number);
		}
		printf(" ");
		number++;
	}
	printf("\n");
	return (0);
}
