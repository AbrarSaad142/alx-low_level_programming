#include "main.h"

/**
 *_isdigit - function that verifies if a character is a number
 *@c: tested character
 *Return: returns 1 if it is a number, otherwise 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
