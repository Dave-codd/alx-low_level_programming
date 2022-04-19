#include "main.h"
/**
 * _puts - print the strings to the stdout
 * @str: input string
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(str[count]);
			count++;
		}
	}
}
