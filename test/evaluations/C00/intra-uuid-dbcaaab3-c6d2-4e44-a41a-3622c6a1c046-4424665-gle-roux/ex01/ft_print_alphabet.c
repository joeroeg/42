/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 07:23:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/09/15 12:18:23 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(int i)
{
	write(1, &i, 1);
}

void	ft_print_alphabet(void)

{
	int	a;

	a = 97;
	while (a < 123)
	{
		ft_print(a);
		a = a + 1;
	}
}
ft
