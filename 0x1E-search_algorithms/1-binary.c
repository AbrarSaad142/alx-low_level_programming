#include "search_algos.h"
/**
*binary_search - searches for a value in an array of integers.
*@array:  is a pointer to the first element of the array to search in.
*@size:  is the number of elements in array.
*@value:is the value to search for.
*Return:return the first index where value or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		mid = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");

	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		low = mid + 1;
	else
		high = mid - 1;
	}
	return (-1);
}
