#include <stdio.h>

/**
 * called_name - prints each character of a name.
 * @name: the name string.
 */

void called_name(const char *name)
{
	if (name != NULL)
	{
		if (*name!= '\0')
		{
			putchar(*name);
			called_name(name + 1);
		}
		else
		{
			putchar('\n');
		}
	}
	else
	{
		fputs("Error\n")
	}
}
