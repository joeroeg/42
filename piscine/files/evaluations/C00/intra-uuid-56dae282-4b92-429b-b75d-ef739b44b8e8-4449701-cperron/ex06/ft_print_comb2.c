/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperron <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:11:23 by cperron           #+#    #+#             */
/*   Updated: 2022/09/22 22:31:43 by cperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_loop(int a, int b)
{
	char	toprint[5];

	toprint[2] = 32;
	while (a <= 98)
	{
		while (b <= 99)
		{
			toprint[0] = a / 10 + 48;
			toprint[1] = a % 10 + 48;
			toprint[3] = b / 10 + 48;
			toprint[4] = b % 10 + 48;
			write(1, &toprint, 5);
			if (a == 98 && b == 99)
			{
				break ;
			}
			write(1, ", ", 2);
			++b;
		}
		b = ++a + 1;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	ft_loop(a, b);
}
