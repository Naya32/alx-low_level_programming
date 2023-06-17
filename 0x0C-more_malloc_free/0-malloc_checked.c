#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: the number of bytes to allocate
 *
 * Return: pointer to memory or terminate with status 98 on faliure.
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("error\n");
			exit(98);
	}

	return (ptr);
}
