/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasgrai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:15:05 by jcasgrai          #+#    #+#             */
/*   Updated: 2022/09/18 18:08:04 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_determine_char(int x, int y, int column, int row);

void	rush(int x, int y)
{
	int		column;
	int		row;

	column = 1;
	row = 1;
	while (row <= y)
	{
		while (column <= x)
		{
			ft_determine_char(x, y, column, row);
			column++;
		}
		ft_putchar('\n');
		column = 1;
		row++;
	}
}

void	ft_determine_char(int x, int y, int column, int row)
{
	if (x <= 0 || y <= 0)
		return ;
	if ((column == 1 && row == 1) || (column == x && row == y))
	{
		ft_putchar('A');
	}
	else if ((column == x && row == 1) || (column == 1 && row == y))
	{
		ft_putchar('C');
	}
	else if (column == 1 || column == x || row == 1 || row == y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
