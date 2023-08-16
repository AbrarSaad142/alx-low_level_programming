#include <stdio.h>

/**
 * print_name - a function that prints a name
 * @name: name of the person.
 * @f: this a function pointer, that recieves a string.
 * Return: this is a void function no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}
