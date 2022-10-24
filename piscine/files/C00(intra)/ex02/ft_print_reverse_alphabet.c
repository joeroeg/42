/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:22:41 by hzhukov           #+#    #+#             */
/*   Updated: 2022/09/22 13:34:48 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(int i)
{
	write(1, &i, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	z;

	z = 122;
	while (z > 96)
	{
		write(1, &z, 1);
		z = z - 1;
	}
}
