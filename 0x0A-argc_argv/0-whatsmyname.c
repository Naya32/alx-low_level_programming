#include <stdio.h>
#include "main.h"

/**
 * main -  program entry point.
 *
 * @argc : argument count.
 * @argv : argument vector.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	(void)argc; /* not in use */
	
	printf("The name of command-line argument : %s\n", argv[0]);

	return (0);
}
