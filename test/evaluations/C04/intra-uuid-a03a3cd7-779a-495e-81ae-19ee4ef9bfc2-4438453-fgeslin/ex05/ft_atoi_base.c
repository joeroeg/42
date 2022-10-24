/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:41:08 by fgeslin           #+#    #+#             */
/*   Updated: 2022/09/22 17:52:45 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_index(char c, char *str);

int	set_state(char c, int state, char *base)
{
	if (c == ' ' && state <= 0)
		return (0);
	else if ((c == '+' || c == '-') && state == 1)
		return (1);
	else if (get_index(c, base) > -1 && state <= 2)
		return (2);
	else
		return (3);
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

int	get_index(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	mult;
	int	state;
	int	nbr;
	int	base_size;

	i = 0;
	mult = 1;
	state = 0;
	nbr = 0;
	base_size = ft_strlen(base);
	if (base_size <= 1)
		return (0);
	while (str[i] != '\0')
	{
		state = set_state(str[i], state, base);
		if (str[i] == '-' && state == 1)
			mult *= -1;
		else if (state == 2)
			nbr = nbr * base_size + get_index(str[i], base);
		else if (state == 3)
			return (nbr * mult);
		i++;
	}
	return (nbr * mult);
}
