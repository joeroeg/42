/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:25:12 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/04 20:19:02 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
		return (0);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	while (i <= nb / 2)
		i += 2;
	if (nb % i == 0)
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main(void)
{
	int	i;

	i = 12;
	printf("%d\n", ft_find_next_prime(i));
}*/
