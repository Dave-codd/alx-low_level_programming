#include<stdio.h>
/**
 * main - Entry point
 *
 * Documentaion: prints all alphabets except q and e
 * in lower case using putchar.
 * Return: Always 0(Success)
 */
int main(void)
{
	char ltr = 'a';

	while (ltr <= 'z')
	{
		if (ltr != 'q' && ltr != 'e')
		{
			putchar(ltr);
			ltr++;
		}
	}
	putchar('\n');
	return (0);
}
