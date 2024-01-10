#include "main.h"

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to print
 */
void _putchar(char c);

/**
 * _puts_recursion - Prints a string followed by a new line using recursion
 * @s: The input string to be printed
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

