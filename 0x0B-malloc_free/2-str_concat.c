#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer of an array of char
 */
char *str_concat(char *s1, char *s2)
{
	char *output;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	output = malloc(sizeof(char) * (i + j + 1));

	if (output == NULL)
	{
		free(output);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		output[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		output[k] = s2[j];

	return (output);
}
