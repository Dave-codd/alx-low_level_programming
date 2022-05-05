#include <stdlib.h>
#include "main.h"

/**
 * _strdup - prints a pointer to a newly allocated
 * space in memory
 * @str: input string
 *
 * Return: pointer of an array to char
 */
char *_strdup(char *str)
{
	char *output;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	output = malloc(sizeof(char) * (i + 1));

	if (output == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		output[j] = str[j];

	return (output);
}
