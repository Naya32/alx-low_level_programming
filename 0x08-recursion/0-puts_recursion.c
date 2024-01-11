#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion
 * @s: The input string to be printed
 * return : nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

