/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:33:56 by fboivin           #+#    #+#             */
/*   Updated: 2022/09/25 15:52:58 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;

	i = 0;
	size--;
	while (size > i)
	{
		x = tab[i];
		tab[i] = tab[size];
		tab[size] = x;
			size--;
			i++;
	}	
}
