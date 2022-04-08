#include<stdio.h>
/**
 * main - Entry point
 *
 * Documentation: The main function prints all alphabets in
 * both upper and lower cases using putchar.
 * Return: Always(0)Success
 */
int main(void)
{
	char up_ltr = 'A';
	char low_ltr = 'a';

	while (low_ltr <= 'z')
	{
		putchar(low_ltr);
		low_ltr++;
	}
	while (up_ltr <= 'Z')
	{
		putchar(up_ltr);
		up_ltr++;
	}
	putchar('\n');
	return (0);
}
