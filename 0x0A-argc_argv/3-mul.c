#include <stdio.h>

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
	int a;
	int b;
int result;

if (argc != 3)
{
	printf("error\n");
	return (1);
}

a = _atoi(argv[1]);
b = _atoi(argv[2]);
result = a *b;

printf("%d\n", result);

return (0);
}
