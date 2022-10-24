/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epasquie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 08:35:01 by epasquie          #+#    #+#             */
/*   Updated: 2022/09/22 08:35:02 by epasquie         ###   ########.fr       */
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
