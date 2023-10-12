#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	int a = 0;
	char *wrd, *sepa = "";

	va_list li;

	va_start(li, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", sepa, va_arg(li, int));
					break;
				case 'i':
					printf("%s%d", sepa, va_arg(li, int));
					break;
				case 'f':
					printf("%s%f", sepa, va_arg(li, double));
					break;
				case 's':
					wrd = va_arg(li, char *);
					if (!wrd)
						wrd = "(nil)";
					printf("%s%s", sepa, wrd);
					break;
				default:
					a++;
					continue;
			}
			sepa = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(li);
}
