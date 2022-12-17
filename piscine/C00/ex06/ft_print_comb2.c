/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:36:35 by hzhukov           #+#    #+#             */
/*   Updated: 2022/09/23 11:40:50 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstring(char *array, int a, int b)
{
	array[0] = a / 10 + 48;
	array[1] = a % 10 + 48;
	array[2] = ' ';
	array[3] = b / 10 + 48;
	array[4] = b % 10 + 48;
	if (b > 1)
	{
		write (1, ", ", 2);
	}
	write (1, array, 5);
}

void	ft_print_comb2(void)
{
	char	array[5];
	int		a;
	int		b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		while (b < 100)
		{
			ft_putstring(array, a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}
