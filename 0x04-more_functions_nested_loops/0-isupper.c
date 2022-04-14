#include "main.h"

/**
 * _isupper - Checks for upper case letter
 * @c: letter to be checked
 *
 * Return: 1 for upper case and 0 for another
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
