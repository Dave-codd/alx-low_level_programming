#include<unistd.h>
/**
 *main - Entry point
 *
 *Return: Always 1(Sucess)
 */
int main(void)
{ 
	        char str0[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
		
		write(2, str0, 60);
  	         return (1);
}
