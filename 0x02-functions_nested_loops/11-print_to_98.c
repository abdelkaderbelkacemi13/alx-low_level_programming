#include "main.h"
/**
 * print_to_98 - print from num to 98
 *	number should be printed on order
 *@num: input
*/
void print_to_98(int num)
{
	int list;

	if (num < 98)
		for (list = num; list < 98; list++)
			printf("%d, ", list);
	else
		for (list = num; list > 98; list--)
			printf("%d, ", list);
	printf("98\n");
