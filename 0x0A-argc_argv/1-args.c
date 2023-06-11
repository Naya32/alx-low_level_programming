#include <stdio.h>

/**
 * main - entry point of program.
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

	printf("number of argument : %d\n", mount);

	return (0);
}
