#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: nothing: nothing
 */

void print_all(const char * const format, ...)
{
	char *s, *sep = "";
	int i = 0;
	va_list args_list;

	va_start(args_list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args_list, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(args_list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args_list, int));
					break;
				case 's':
					s = va_arg(args_list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args_list);

}
