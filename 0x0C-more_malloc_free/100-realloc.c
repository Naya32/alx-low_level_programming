#include <stdio.h>
#include <stdlib.h>


/**
 * _realloc - Reallocates a memory block.
 *@ptr: Pointer to the memory block previously allocated.
 *@old_size: size of the allocated space for ptr.
 *@new_size: new size of the memory block.
 *
 *Return: pointer to the reallocated memory or NULL if reallocation fails.
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_szie)
		return (ptr);

	void *new_ptr = malloc(new_size);

	if (new_ptr == NULL)

		return (NULL);

	unsigned int min_size = (old_size < new_size) ? old_size : new_size;

	memcpy(new_ptr, ptr, min_size);

	free(ptr);

	return (new_ptr);
}
