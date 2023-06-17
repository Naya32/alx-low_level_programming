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

/**
 * main - program entry point.
 *
 * Return: 0 on success.
 */

int main(void)
{
	unsigned int size = 10;
	int *arr = malloc_checked(size * sizeof(int));

	free(arr);
	return (0);
}
