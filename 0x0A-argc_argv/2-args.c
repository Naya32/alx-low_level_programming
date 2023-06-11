#include <stdio.h>

/**
 * main - program entry point.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * program that prints all argument it receives.
 *Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int a;

printf("Number of argument : %d\n", argc);

for (a = 0; a < argc; a++)
	printf("argumets %d: %s\n", a, argv[a]);

	return (0);

}

