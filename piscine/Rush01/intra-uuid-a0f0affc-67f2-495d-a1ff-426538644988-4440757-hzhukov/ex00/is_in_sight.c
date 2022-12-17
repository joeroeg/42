/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_in_sight.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:56:09 by fgeslin           #+#    #+#             */
/*   Updated: 2022/09/25 18:37:23 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	check_line(int *line, int size); // reduce the number of line of main function because function is too long

int	*get_row(int ind, int *field, int *sights, int max) //
{
	int	i;
	int	*line;

	line = malloc((max + 2) * sizeof(int));
	line[0] = sights[(ind - ind % max) / max + 2 * max];
	line[max + 1] = sights[(ind - ind % max) / max + 3 * max];
	i = 1;
	while (i <= max)
	{
		line[i] = field[ind - ind % max + i - 1];
		i++;
	}
	return (line);
}

int	is_in_sight(int ind, int *field, int *sights, int max)
{
	int		i;
	int		*line;

	line = get_row(ind, field, sights, max);
	if (check_line(line, max) == 0)
	{
		free(line);
		return (4);
	}
    
	line[0] = sights[ind % max]; // setup left sight with required digit.we need that to find proper number in our sight array ???
	line[max + 1] = sights[ind % max + max]; // setup right sight (number after the answer cell) we need that to find proper number in our sight array???
	i = 1;
	while (i <= max)
	{
		line[i] = field[ind % max + max * (i - 1)]; // it is used to populate the line from 1 to max (4 empty cells)
		i++;
	}
	if (check_line(line, max) == 0) // we check that left and right side are NOT valid.
	{
		free(line); // this line is linked to malloc. to prevent overuse of memory
		return (5); // if return 5 it's not valid
	}
    
	free(line);
	return (1);
}

void	tozero(int	*arr, int size) // we reset every cell to zero after we check.
{
	int	i;

	i = 0;
	while (i < size)
	{
		arr[i] = 0;
		i++;
	}
}

int	check_line(int *line, int size)
{
	int		i; // counter shows where we are in our cell
	int		maxheights[2]; // max value
	int		insights[2]; // how many boxes i see

	i = 0;
	tozero(maxheights, 2);
	tozero(insights, 2);
	while (i++ <= size) //
	{
		if (line[i] == 0) // it's used to check only those line that are greater that 0. Because it will help us to check only one cell at a time.
			return (1);
		if (maxheights[0] < line[i]) // we compare max with value in our cell 
		{
			maxheights[0] = line[i];
			insights[0]++;
		}
		if (maxheights[1] < line[size + 1 - i])
		{
			maxheights[1] = line[size + 1 - i];
			insights[1]++;
		}
	}
	if (insights[0] == line[0] && insights[1] == line[size + 1]) // if left and right conditions are true we return true
		return (1);
	return (0);
}
