#include <stdio.h>
#include <unistd.h>
#include <limits.h> // printf("%d", INT_MAX)

#include "ft_ultimate_ft.c"

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int a;
	int *********nbr1;
	int ********nbr2;
	int *******nbr3;
	int ******nbr4;
	int *****nbr5;
	int ****nbr6;
	int ***nbr7;
	int **nbr8;
	int *nbr9;

	a = 0;
	nbr9 = &a;
	nbr8 = &nbr9;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	ft_ultimate_ft(nbr1);
	printf("%d", a);
	return (0);
}
