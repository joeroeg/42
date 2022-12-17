/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:05:43 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/22 16:40:25 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 5);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		nbr = -nb;
		write(1, "-", 1);
	}
	else
	{
		nbr = nb;
	}
	if (nb / 10 != 0)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int	main(void)
{
	int	n = 1516ll;
	ft_putnbr(n);
	return (0);
}
