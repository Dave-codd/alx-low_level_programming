#include "main.h"
/**
 * rev_string - prints strings in reverse order
 * @s: input string
 */
void rev_string(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			break;
		}
		else
		{
			count++;
		}
	}
	for (count--; count >= 0; count--)
	{
		_putchar(s[count]);
	}
}
