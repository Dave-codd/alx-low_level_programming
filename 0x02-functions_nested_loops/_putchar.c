#include<unistd.h>
/**
 * -putchar - Writes the chracter c to stdout
 *  @c: The chracter to print
 *
 *  Return: On sucess 1
 *  On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
