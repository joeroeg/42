/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:31:50 by hzhukov           #+#    #+#             */
/*   Updated: 2022/09/26 20:01:45 by hzhukov          ###   ########.fr       */
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
