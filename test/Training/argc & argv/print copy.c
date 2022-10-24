#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (j < argc)
	{
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
			
		}
		write (1, "\n", 1);
		i = 0;
		j++;
	}
	return (0);
}