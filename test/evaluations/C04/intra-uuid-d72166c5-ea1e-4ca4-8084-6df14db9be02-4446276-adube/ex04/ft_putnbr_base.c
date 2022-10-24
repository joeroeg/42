/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:14:12 by adube             #+#    #+#             */
/*   Updated: 2022/10/02 10:55:52 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check(char *base)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (base[i])
	{
		if (base[0] == '\0' || base[0] == 1)
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[y])
		{
			if (base[i] == base[y])
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	b;
	int	i;

	i = 0;
	b = ft_strlen(base);
	if (ft_check(base))
	{
		if (nbr < 0)
		{
			nbr = nbr * -1;
			ft_putchar('-');
		}
		if (nbr > (b - 1))
		{	
			ft_putnbr_base(nbr / b, base);
			nbr = nbr % b;
		}
		if (nbr >= 0 && nbr < b)
		{
			nbr = base[0 + nbr];
			ft_putchar(nbr);
		}
	}
}
