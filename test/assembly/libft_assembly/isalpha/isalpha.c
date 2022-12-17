#include <stdio.h>


int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c <= 122))
		return (1);
	return (0);
}

int	main(void)
{
	char c = 'a';
	printf("%d", ft_isalpha(c));
	return (0);
}