#include "main.h"

/**
 * print_string_reverse - Prints a string in reverse.
 * @str: The string to print in reverse.
 */
void print_string_reverse(const char *str)
{
if (*str)
{
print_string_reverse(str + 1);
putchar(*str);
}
}
