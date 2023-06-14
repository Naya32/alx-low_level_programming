#include <stdio.h>
#include <stdlib.h>
/**
 *main - program entry point.
 *
 *@argc: argument count.
 *@argv: argument vector .
 *
 * a program that multiplied two numbers.
 * Return: 1 (error), 0 (success).
 */

int main(int argc, char *argv[])
{
	int result =  1;
	int a;

if (argc != 3)
{
	printf("error\n");
	return (1);
}

for (a = 1; a < argc; a++)
{
	int index = atoi(argv[a]);

	if (index == 0)
	{
		printf("%s\n", argv[a]);
		return (1);
	}

	result *= index;
}

printf("%d\n", result);

return (0);
}
