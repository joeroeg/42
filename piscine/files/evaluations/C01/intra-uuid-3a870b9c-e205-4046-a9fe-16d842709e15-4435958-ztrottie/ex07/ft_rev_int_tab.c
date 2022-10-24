/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:16:20 by ztrottie          #+#    #+#             */
/*   Updated: 2022/09/21 16:09:30 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp_val;
	int	i;

	i = 0;
	while (i < size)
	{
		temp_val = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp_val;
		i++;
		size--;
	}
}
