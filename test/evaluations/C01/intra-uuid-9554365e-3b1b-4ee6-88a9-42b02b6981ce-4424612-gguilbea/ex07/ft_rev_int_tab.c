/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguilbea <gguilbea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:59:02 by gguilbea          #+#    #+#             */
/*   Updated: 2022/09/14 22:08:17 by gguilbea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		a;
	int		b;

	a = 0;
	b = size - 1;
	while (a < b)
	{
		ft_swap(&tab[a], &tab[b]);
		a++;
		b--;
	}
}
