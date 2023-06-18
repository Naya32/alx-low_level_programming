#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the minimum value.
 * @max: the maximum value.
 *
 * Return: a point to the array or NULL on error.
 *
 */

int *array_range(int min, int max)
{

	if (min > max)
	{
		return (NULL);
	}

int size = max - min + 1;
int arr = malloc(size * sizeof(int));
if (arr == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
	arr[i] = min + 1;
}
		return (arr);
}
