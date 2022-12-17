/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:25:00 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/04 02:39:58 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b)
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
int main(void)
{
	int tab [] = {1, 2, 3, 4, 5};
	int size = 5;
	ft_rev_int_tab(tab, size);
	int i = 0;
	while(i < size) 
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}