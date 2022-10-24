#include <unistd.h>

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (0);
}

int	main(void)
{
	int i;
	for (i = '0'; i <= '999'; i++)
	{
		ft_putchar(i);
		if (i == '9')
		i = '0';
	}
	
}