/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasgrai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:14:57 by jcasgrai          #+#    #+#             */
/*   Updated: 2022/09/18 18:06:21 by ztrottie         ###   ########.fr       */
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
	if (x <= 0 || y <= 0)
		return ;
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
	if (row == 1 && (column == 1 || column == x))
	{
		ft_putchar('o');
	}
	else if (row == y && (column == 1 || column == x))
	{
		ft_putchar('o');
	}
	else if (row == 1 || row == y)
	{
		ft_putchar('-');
	}
	else if (column == 1 || column == x)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}
