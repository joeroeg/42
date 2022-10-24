#include <unistd.h>

int ft_putchar(int c)
{
	write(1, &c, 1);
	return (ft_putchar);
}

int main(void)
{
	int d = -97;
	ft_putchar(d);
}