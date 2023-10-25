#include <stdio.h>

/**
 * array_iterator - executes a function on each element of an array.
 * @array: the array of integers.
 * @size: the size of the array.
 * @action: the function to execute on each element.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}