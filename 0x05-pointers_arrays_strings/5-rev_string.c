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
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(s[count]);
			count++;
		}
	}
	for (count--; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
