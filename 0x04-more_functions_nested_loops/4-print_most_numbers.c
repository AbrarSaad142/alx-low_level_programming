#include <stdio.h>
#include "main.h"

/**
 *print_most_numbers - function that prints the numbers
 *from 0 to 9 except 2 and 4
 *followed by a new line
 */

void print_most_numbers(void)
{
	int i = 48;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}

		_putchar(i);
	}

	_putchar(10);
}
