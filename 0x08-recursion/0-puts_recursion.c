#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: The string to print.
 */
void _puts(const char *str)
{
int i = 0;

while (str[i])
{
write(1, &str[i], 1);
i++;
}
/* Print a newline character to create a new line */
write(1, "\n", 1);
}
