#include <stdio.h>
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
(void)argv; /* not in use */

printf("%d\n", argc - 1);

	return (0);
}
