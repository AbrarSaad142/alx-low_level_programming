#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times.
 */
void print_alphabet_x10(void)
{
	char i, k;

	for (k = 1; k <= 10; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);

		_putchar('\n');
	}
}
