#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - alllocates memory
 * @b: amount of bytes
 *
 * Return: pointer to the allocated memory
 * if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);

	return (s);
}
