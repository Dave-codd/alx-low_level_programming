#include<unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1(Sucess)
 */
int main(void)
{
	char my_str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, my_str, 60);
	return (1);
}
