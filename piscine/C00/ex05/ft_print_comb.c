/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:27:58 by hzhukov           #+#    #+#             */
/*   Updated: 2022/09/22 15:24:37 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print(int *a)
{
	ft_putchar(a[0] + '0');
	ft_putchar(a[1] + '0');
	ft_putchar(a[2] + '0');
	if (a[0] != 7)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a[3];

	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	while (a[0] <= 7)
	{
		while (a[1] <= 8)
		{
			while (a[2] <= 9)
			{
				ft_print(a);
				++a[2];
			}
			a[1]++;
			a[2] = a[1] +1;
		}
		a[0]++;
		a[1] = a[0] + 1;
		a[2] = a[1] + 1;
	}
}
