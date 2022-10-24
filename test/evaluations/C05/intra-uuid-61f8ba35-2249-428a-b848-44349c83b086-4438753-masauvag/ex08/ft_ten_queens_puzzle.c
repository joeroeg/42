/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masauvag <masauvag@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:00:50 by masauvag          #+#    #+#             */
/*   Updated: 2022/09/27 16:52:28 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char (*tab)[10])
{
	char		row;
	char		col;
	static int	count;

	col = 47;
	while (++col <= '9')
	{
		row = 47;
		while (++row <= '9')
		{
			if (tab[row - 48][col - 48] == 'Q')
				write (1, &row, 1);
		}
	}
	count++;
	write (1, "\n", 1);
}

int	ft_check(char (*tab)[10], int row, int col)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		if (tab[row][i] == 'Q' || tab[i][col] == 'Q')
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_diag(char (*tab)[10], int row, int col)
{
	int	rowi;
	int	coli;

	rowi = row;
	coli = col;
	while (col >= 0 && row >= 0)
	{
		if (tab[row][col] == 'Q')
			return (0);
		col--;
		row--;
	}
	col = coli;
	row = rowi;
	while (col < 10 && row >= 0)
	{
		if (tab[row][col] == 'Q' && row != rowi && col != coli)
			return (0);
		col++;
		row--;
	}
	return (1);
}

int	ft_solve(char (*tab)[10], int row, int col, int queens)
{
	if (queens == 10)
	{
		ft_print(tab);
		return (0);
	}
	col = 0;
	if (row > 9 && col > 9 && queens == 10)
		return (1);
	while (col < 10)
	{
		if (ft_check(tab, row, col) == 1)
		{
			if (ft_check_diag(tab, row, col) == 1)
			{
				tab[row][col] = 'Q';
				if (ft_solve(tab, row + 1, col, queens + 1) == 1)
					return (1);
				tab[row][col] = '!';
			}
		}
		col++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	char	tab[10][10];

	ft_solve(tab, 0, 0, 0);
	return (724);
}

int main(void)
{
	ft_ten_queens_puzzle();
}
