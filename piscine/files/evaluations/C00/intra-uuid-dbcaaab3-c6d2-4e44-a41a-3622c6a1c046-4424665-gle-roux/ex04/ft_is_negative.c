/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:27:26 by gle-roux          #+#    #+#             */
/*   Updated: 2022/09/17 15:13:11 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)

{
	char	p;

	if (n >= 0)
	{
		p = 'P';
		ft_print(p);
	}
	else
	{
		p = 'N';
		ft_print(p);
	}
}
