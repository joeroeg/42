/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrank <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:10:23 by lfrank            #+#    #+#             */
/*   Updated: 2022/09/18 18:07:04 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_determine_char(int x, int y, int column, int row);

void	rush(int x, int y)
{
	int	column;
	int	row;

	column = 1;
	row = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (row <= y)
	{
		while (column <= x)
		{
			ft_determine_char(x, y, column, j);
			column++;
		}
		ft_putchar('\n');
		column = 1;
		row++;
	}
}

void	ft_determine_char(int x, int y, int column, int j)
{
	if ((j == 1 && column == 1) || (column == x && row == y))
	{
		ft_putchar('/');
	}
	else if ((column == x && j == 1) || (column == 1 && row == y))
	{
		ft_putchar(92);
	}
	else if (column == 1 || column == x || row == 1 || row == y)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}
