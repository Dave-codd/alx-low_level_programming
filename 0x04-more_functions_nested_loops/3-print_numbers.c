#include "main.h"

/** print_numbers - Prints numbers 0 to 9
 * followed by new line
 */

void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n')
}
