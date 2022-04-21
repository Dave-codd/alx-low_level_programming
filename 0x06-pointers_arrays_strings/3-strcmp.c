#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if s1 and s2 are equal and,
 * other if not.
 */

char *_strcmp(char *s1, char *s2)
{
	int i = 0, comp = 0;

	while (comp == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		comp = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (comp);
}
