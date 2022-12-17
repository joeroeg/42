/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:24:44 by abeaudet          #+#    #+#             */
/*   Updated: 2022/09/25 16:01:39 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	display_tab(int *tab, int max)
{
	int	i;

	i = 0;
	while (i < max * max)
	{
		if (i % max == max - 1)
		{
			ft_putchar(tab[i] + '0');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(tab[i] + '0');
			ft_putchar(' ');
		}
		i++;
	}
}
