/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:11:51 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/04 20:20:55 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	while (nb % i++ != 0)
	{
		if (nb == i)
		{
			return (1);
		}
	}
	return (0);
}
/*
int	main(void)
{
	int	i;

	i = 5;
	printf("%d\n", ft_is_prime(i));
	return (0);
}
*/
