/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperron <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:23:01 by cperron           #+#    #+#             */
/*   Updated: 2022/09/27 17:13:47 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	print(int nb)
{
	char	n;

	if (nb < 9)
	{
		n = nb + 48;
		write(1, &n, 1);
	}
	else
	{
		print(nb / 10);
		n = (nb % 10) + 48;
		write(1, &n, 1);
	}
}

void	ft_putnbr(int nb)

{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		print(nb);
	}
}

int main(void)
{
	ft_putnbr(2147483648);
	return (0);
}
