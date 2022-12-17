/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:36:19 by fgeslin           #+#    #+#             */
/*   Updated: 2022/09/25 16:50:18 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_duplicate(int i, int *field, int max)
{
	int		row;
	int		col;

	row = i - i % max;
	col = i % max;
	while (row < max * max)
	{
		if (i != row && field[i] == field[row])
			return (1);
		if (i != col && field[i] == field[col])
			return (1);
		row++;
		col += max;
	}
	return (0);
}
