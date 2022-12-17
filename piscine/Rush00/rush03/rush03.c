/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 12:55:07 by hzhukov           #+#    #+#             */
/*   Updated: 2022/09/18 18:07:25 by ztrottie         ###   ########.fr       */
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
	if ((x <= 0) || (y <= 0))
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
	if ((row == 1 && column == 1) || (column == 1 && row == y))
	{
		ft_putchar('A');
	}
	else if ((column == x && row == 1) || (column == x && row == y))
	{
		ft_putchar('C');
	}
	else if (column == 1 || row == 1 || column == x || row == y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
