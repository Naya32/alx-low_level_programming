#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*main - entry point of program.
*
* @argc: argument count.
* @argv: argument vector.
* program that prints number and new line.
*
* Return: 0 0n success.
*/

int main(int argc, char *argv[])
{
	int mount = argc - 1;
	int argInt;

	if (argc > 1)
	{
		argInt = atoi(argv[1]);
		printf("argument as an integer :  %d\n", argInt)
	}

	printf("number of argument :  %d\n", mount);

	return (0);
}
