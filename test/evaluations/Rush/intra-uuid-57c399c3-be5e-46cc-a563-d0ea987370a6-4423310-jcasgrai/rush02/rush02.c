/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:19:43 by ztrottie          #+#    #+#             */
/*   Updated: 2022/09/17 12:22:01 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	column;
	int	row;

	column = 1;
	row = 1;
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
