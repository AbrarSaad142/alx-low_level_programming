#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates an array
 *@array: the array to iterate
 *@size: the size of the array.
 *@action: this a function pointer.
 *Return: this is a void function no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
