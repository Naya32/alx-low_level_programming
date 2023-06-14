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
int index = 0;
if ( index < argc )
{
	printf("%s\n", argv[index]);
	index++;
}
	return (0);

}

