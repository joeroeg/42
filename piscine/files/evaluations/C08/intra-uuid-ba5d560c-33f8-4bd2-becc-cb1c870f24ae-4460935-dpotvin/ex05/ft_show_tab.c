/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:42:39 by dpotvin           #+#    #+#             */
/*   Updated: 2022/10/02 16:13:08 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"

void	ft_write(int nb)
{
	write(1, &nb, 1);
}

void	ft_write_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(unsigned int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_write(nb % 10 + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].copy != 0)
	{
		if (par[i].str != 0)
			ft_write_string(par[i].str);
		else
			write(1, "(null)\n", 7);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_write_string(par[i].copy);
		i++;
	}	
}
