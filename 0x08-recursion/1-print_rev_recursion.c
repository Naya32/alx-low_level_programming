#include "main.h"

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to print
 */
void _putchar(char c);

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The input string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
