/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:41:08 by fgeslin           #+#    #+#             */
/*   Updated: 2022/09/22 17:49:57 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	base_size = ft_strlen(base);
	if (base_size <= 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr <= -base_size)
			ft_putnbr_base(-(nbr / base_size), base);
		ft_putchar(base[(10 - (nbr % base_size)) % 10]);
	}
	else
	{
		if (nbr >= base_size)
			ft_putnbr_base(nbr / base_size, base);
		ft_putchar(base[nbr % base_size]);
	}
}
