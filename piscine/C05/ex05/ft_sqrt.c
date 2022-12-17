/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:50:44 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/04 20:20:42 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < nb / i)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	return (0);
}
/*
int	main(void)
{
	int	i;

	i = 25;
	printf("%d\n", ft_sqrt(i));
	return (0);
}
*/
