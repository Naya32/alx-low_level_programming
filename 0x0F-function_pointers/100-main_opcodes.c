#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of the main function.
 * @num_bytes: the number of bytes to print.
 */

void print_opcodes(int num_bytes)
{
	unsigned char *ptr = (unsigned char *)print_opcodes;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x", ptr[i]);
	}

	printf("\n");
}

/**
 * main - program entry point.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 on success, 1 on error, 2 on negative.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}

