#include <unistd.h>

int ft_putchar(int c)
{
	write(1, &c, 1);
	return(0);
}

int main()
{
	int c = 'a';
	while (c <= 'z')
	ft_putchar(c);
	c++;
	return(0);
}