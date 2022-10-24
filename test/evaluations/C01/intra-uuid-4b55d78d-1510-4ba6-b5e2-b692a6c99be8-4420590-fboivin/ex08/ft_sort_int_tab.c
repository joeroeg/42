/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:25:38 by fboivin           #+#    #+#             */
/*   Updated: 2022/09/25 15:56:31 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < size)
	{
		while (x < size)
		{
			if (tab[x] > tab[x + 1] && tab[x + 1] < size)
			{
				temp = tab[x];
				tab[x] = tab[x +1];
				tab[x + 1] = temp;
			}
			x++;
		}
	y++;
	x = 0;
	}
}
