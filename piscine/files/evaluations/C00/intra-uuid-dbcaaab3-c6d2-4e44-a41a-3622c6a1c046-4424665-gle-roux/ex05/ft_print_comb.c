/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:05:34 by gle-roux          #+#    #+#             */
/*   Updated: 2022/09/17 15:11:17 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_emplacement(int d, int e, int f)

{
	write(1, &d, 1);
	write(1, &e, 1);
	write(1, &f, 1);
	if (d != 55)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
void	ft_print_comb(void)

{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				ft_emplacement(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
int main()
{
    ft_print_comb();
    return (0);
}
