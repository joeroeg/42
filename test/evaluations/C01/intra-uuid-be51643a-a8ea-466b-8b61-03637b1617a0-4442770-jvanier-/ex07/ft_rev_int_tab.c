/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanier- <jvanier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:42:16 by jvanier-          #+#    #+#             */
/*   Updated: 2022/09/29 15:23:13 by jvanier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)

{
	int	a;
	int	tmp;

	a = 0;
	while (a < size)
	{
		tmp = tab[a];
		tab[a] = tab[size - a];
		tab[size - a] = tmp;
		a++;
		size--;
	}
}
