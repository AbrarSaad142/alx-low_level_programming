#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to creates an array of chars.
 * @size: the size of the memory.
 * @c: a specific char that  initializes  it.
 * Return: Return pointer to array created
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc((size) * sizeof(char));
	if (arr == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
