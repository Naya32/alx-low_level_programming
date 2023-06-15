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
int index; 

for (index = 0; index < argc; index++ )
{
	printf("%s\n", argv[index]);
	
}
	return (0);

}

