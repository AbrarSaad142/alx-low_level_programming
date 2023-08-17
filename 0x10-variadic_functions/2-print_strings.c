#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - a function that prints strings.
 *@separator: the string to be printed between the strings.
 *@n: the number of strings passed to the function.
 *Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(valist);

	for (i = 0; i < n; i++)
	{
		va_arg(args, char *);
		if (str == NULL)
		{
			printf("nil");
			break;
		}
		printf("%s", str);

		if (n == i + 1)
		{
			break;
		}

		printf("%s", separator);
	}

	printf("\n");
	va_end(string);
	}
