/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epasquie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:17:23 by epasquie          #+#    #+#             */
/*   Updated: 2022/09/21 20:17:24 by epasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	nb2;

	i = 0;
	nb2 = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (++i <= nb2)
		nb *= i;
	return (nb);
}
