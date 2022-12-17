/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 23:41:33 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/03 22:10:04 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

/*int	main(void)
{
	int	n = 2147483647;
	ft_putnbr(n);
	return (0);
}*/