/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:22:11 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/04 20:21:34 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = 0;
	result = nb;
	if (power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	while (power > 1)
	{
	result *= nb;
	--power;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(5, 0));
	return (0);
}
*/
