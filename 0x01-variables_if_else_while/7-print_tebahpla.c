#include<stdio.h>
/**
 * main - Entry point
 *
 * Documentation: prints alphabets in reverse order
 * Return: Always 0(Sucess)
 */
int main(void)
{
	char ltr = 'z';

	while (ltr >= 'a')
	{
		putchar(ltr);
		ltr--;
	}
	putchar('\n');
	return (0);
}
