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

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		if (ltr != 'q' && ltr != 'e')
		{
			putchar(ltr);
		}
	}
	putchar('\n');
	return (0);
}
