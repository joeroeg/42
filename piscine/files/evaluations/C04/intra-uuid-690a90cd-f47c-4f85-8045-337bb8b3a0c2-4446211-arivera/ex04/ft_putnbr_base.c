/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivera <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:15:20 by arivera           #+#    #+#             */
/*   Updated: 2022/09/27 17:15:31 by arivera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_error(char *base, int *err)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		*err = 1;
	i = 0;
	while (base[i] != '\0' && *err == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*err = 1;
		}
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
			*err = 1;
		i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				error;
	int				baselength;

	ft_error(base, &error);
	if (error != 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -1 * nbr;
		}
		baselength = 0;
		while (base[baselength] != 0)
		{
			baselength++;
		}
		if (nbr < baselength)
			write(1, &base[nbr], 1);
		if (nbr >= baselength)
		{
			ft_putnbr_base(nbr / baselength, base);
			ft_putnbr_base(nbr % baselength, base);
		}
	}
}
