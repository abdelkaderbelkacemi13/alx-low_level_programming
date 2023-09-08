#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'tell if the last digit is positive or negative'
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int n, degit;

srand(time(0));
n = rand() - RAND_MAX / 2;
degit = n % 10;
if (degit > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, degit);
else if (degit == 0)
printf("Last digit of %i is %i and is 0\n", n, degit);
else if (degit < 6 && degit != 0)
printf("Last digit of %i is %i and is less than 6 and not 0");

return (0);
}
