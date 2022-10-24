/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masauvag <masauvag@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:21:17 by masauvag          #+#    #+#             */
/*   Updated: 2022/09/27 16:50:31 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	i = 1;
	while (++i <= nb && i <= 2147483647)
		if (nb % i == 0 && nb != i)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_find_next_prime(12));
}
