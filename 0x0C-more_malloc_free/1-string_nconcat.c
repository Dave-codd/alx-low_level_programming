#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 *
 * Return: pointer to the allocated memory
 * if malloc fails, status value is eqaul to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	k = i + j;

	output = malloc(k + 1);

	if (output == NULL)
		return (NULL);

	for (l = 0; l < k; l++)
		if (l < i)
			output[l] = s1[l];
		else
			output[l] = s2[l - i];

	output[l] = '\0';

	return (output);
}
