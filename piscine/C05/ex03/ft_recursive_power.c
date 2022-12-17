/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:21:34 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/04 20:20:17 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	if (power == 1)
		return (nb);
	return (ft_recursive_power(nb, power - 1) * nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 5));
	return (0);
}
*/
