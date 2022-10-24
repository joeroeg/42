/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguilbea <gguilbea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:24:04 by gguilbea          #+#    #+#             */
/*   Updated: 2022/09/15 13:14:34 by gguilbea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_change(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		x;
	int		p;

	i = 0;
	while (i < size - 1)
	{
		p = i;
		x = i + 1;
		while (x < size)
		{
			if (tab[x] < tab[p])
				p = x;
			x++;
		}
		ft_change(&tab[p], &tab[i]);
		i++;
	}
}
