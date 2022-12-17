/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:19:43 by ztrottie          #+#    #+#             */
/*   Updated: 2022/09/18 18:06:09 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	column;
	int	row;

	column = 1;
	row = 1;
	if (x <= 0 || y <=0)
		return ;
	while (row <= y)
	{
		while (column <= x)
		{
			if (row == 1 && (column == 1 || column == x))
				ft_putchar('A');
			else if (row == y && (column == 1 || column == x))
				ft_putchar('C');
			else if (column == 1 || column == x || row == 1 || row == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		column = 1;
		row++;
	}
}
