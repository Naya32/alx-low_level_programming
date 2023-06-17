#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - Concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: number of bytes to concatenate
 *
 * Return: return a pointer or NULL to newly concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_length = 0;
unsigned int s2_length = 0;
char *result = NULL;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

s1_length = strlen(s1);
s2_length = strlen(s2);

if (n >= s2_length)
	n = s2_length;

result = (char *)malloc((s1_length + n + 1) * sizeof(char));
if (result == NULL)
	return (NULL);

strcpy(result, s1);

	strncat(result, s2, n);

	return (result);
}
