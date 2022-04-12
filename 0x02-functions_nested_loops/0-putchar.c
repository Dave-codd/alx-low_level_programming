#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 on Success
 */
int main(void)
{
	char x[] = "_putchar";
	int k;

	for (k = 0; k < 8; k++)
	{
		_putchar(x[k]);
	}
	_putchar('\n');
	return (0);
}
