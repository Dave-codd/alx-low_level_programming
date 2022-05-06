#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array.
 * if max > min, returns NULL
 * if malloc fails, returns NULL
 */
int *array_range(int min, int max)
{
	int *iout;
	int i;

	if (max < min)
		return (NULL);

	iout = malloc(sizeof(*iout) * ((max - min) + 1));

	if (iout == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		iout[i] = min;

	return (iout);
}
