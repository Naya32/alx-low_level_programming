#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it.
 * @size: Size of the array.
 * @c: Character to initialize each element of the array.
 *
 * Return: A pointer to the created array, or NULL if size is 0.
 */

char *create_array(unsigned int size, char c)
{
	char *Array;

if (size == 0)
{
return (NULL);
}

Array = (char *)malloc(size * sizeof(char));

if (Array == NULL)
{
return (NULL);
}

{
unsigned int i;
for (i = 0; i < size; i++)
{
Array[i] = c;
}
}

return (Array);
}
