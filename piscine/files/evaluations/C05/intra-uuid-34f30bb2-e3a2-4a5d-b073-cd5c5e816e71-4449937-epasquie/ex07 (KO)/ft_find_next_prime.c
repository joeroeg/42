/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epasquie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:14:48 by epasquie          #+#    #+#             */
/*   Updated: 2022/09/22 09:14:49 by epasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	div;
	int	check;

	i = 1;
	if (nb <= 1 )
		return (0);
	while (++i < nb)
	{
		div = nb / i;
		check = div * i;
		if (check == nb)
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while(ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
