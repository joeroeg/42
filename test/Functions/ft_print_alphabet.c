#include <unistd.h>

void ft_putchar(int c )
{
	write(1, &c, 1);
}

int main()
{
	char c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
	return(0);
}