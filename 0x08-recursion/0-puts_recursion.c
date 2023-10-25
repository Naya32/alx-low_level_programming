#include <unistd.h>

/**
 * _putchar - writes a character to the standard output (stdout)
 * @c: The character to print
 *
 * Return: On success, the number of characters written.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: The string to print
 */
void _puts(char *str)
{
if (*str != '\0')
{
_putchar(*str);
_puts(str + 1);
}
{
	_putchar('\n');
}
}
