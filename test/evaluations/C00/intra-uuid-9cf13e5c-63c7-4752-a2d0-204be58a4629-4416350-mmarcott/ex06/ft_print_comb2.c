/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combFinal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mickael.marcotte2004@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:02:00 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/15 20:19:59 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_chow_comb(char comb[4])
{	
	write(1, &comb[0], 1);
	write(1, &comb[1], 1);
	write(1, " ", 1);
	write(1, &comb[2], 1);
	write(1, &comb[3], 1);
	if (comb[0] == '9' && comb[1] == '8' && comb[2] == '9' && comb[3] == '9')
	{
	}
	else
		write(2, ", ", 2);
}

void	show_98(char row[4])
{
	row[1] = '8';
	ft_chow_comb(row);
	row[1] = '9';
}

void	number_checker(char row[4])
{
	if (row[2] > '0' && row[3] == '1')
	{
		row[3] = '0';
		ft_chow_comb(row);
		write(2, ", ", 2);
		row[3] = '1';
		ft_chow_comb(row);
		row[3]++;
	}
	else if (row[3] == '1' && row[1] > '0')
	{
		row[3]++;
		ft_chow_comb(row);
		write(2, ", ", 2);
	}
	else if (row[0] == '9' && row[1] == '9')
	{
		show_98(row);
	}
	else
	{
		ft_chow_comb(row);
	}
}

void	ft_print_comb2(void)
{
	char	row[4];

	row[0] = '0';
	while (row[0] <= '9')
	{
		row[1] = '0';
		while (row[1] <= '9')
		{
			row[2] = row[0];
			while (row[2] <= '9')
			{
				row[3] = row[1] + 1;
				while (row[3] <= '9')
				{
					number_checker(row);
					row[3]++;
				}
				row[2]++;
			}
			row[1]++;
		}
		row[0]++;
	}
}
