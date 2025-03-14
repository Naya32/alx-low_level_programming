/*
 * file created by Ezike Ifunanya
 *
 *  main: file to print both upper and lower case letters.
 *  returns 0
 */

#include<stdio.h>

int main(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar (a);
	}

	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar (a);
	}
	putchar ('\n');

	return (0);
}
