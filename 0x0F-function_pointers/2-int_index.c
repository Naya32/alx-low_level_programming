#include <stdio.h>

/**
 * int_index - searches for an integer in an array.
 * @array: the array of integers.
 * @size: the number of elements in the array.
 * @cmp: the comparison function to be used.
 *
 * Return: 0 on success, -1 on error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

for (i = 0; i < size; i++)
		{
if (cmp(array[i]) != 0)
return (i);
		}
	}
return (-1);
}
