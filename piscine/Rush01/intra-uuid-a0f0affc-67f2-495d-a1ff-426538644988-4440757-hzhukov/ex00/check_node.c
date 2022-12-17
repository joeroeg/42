/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:30:10 by fgeslin           #+#    #+#             */
/*   Updated: 2022/09/25 18:55:34 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_in_sight(int ind, int *field, int *sights, int max);

int	is_duplicate(int i, int *field, int max);

int	check_node(int i, int *field, int *sights, int max);

int	is_node_valid(int i, int *field, int *sights, int max)
{
	if (is_duplicate(i, field, max) == 0)
		if (is_in_sight(i, field, sights, max) == 1)
			if (field[i] < max + 1)
				return (1);
	return (0);
}

int	not_valid(int i, int *field, int *sights, int max)
{
	if (field[i] >= max) // we check if we reach max inside our cell
	{
		if (i == 0) // it means to we count all possible variants and reach the beginning. If the beginning is also FALSE than we do not have a solution.
			return (0); // we do not have a solution.
		else
		{
			field[i] = 0; // reset current cell
			field[i - 1]++; // increase the previous cell
			return (check_node(i - 1, field, sights, max)); // we check changed previous cell again if it is valid. we call check_node function i - 1 is used to check the previous cell because i is an index and right know equal the index of current cell.
		}
	}
	else // if (field[i] < max also possible condition.
	{
		field[i]++; // increase digits in the current cell
		return (check_node(i, field, sights, max)); // we check current cell if it is valid.
	}
}

int	check_node(int i, int *field, int *sights, int max) // int i - the cell that we check. int *field, sights, max - are the same as in out main function.
{
	int		endcode; // encode - is a value that we return reccursivelly to check if it is reached the end or nothing found.

	endcode = -1; // -1 - algorithm has an error (must never showed up) 0 - algorithm nothing found 1 - algorithm found a solution
	if (is_node_valid(i, field, sights, max) == 1) // if the cell valid (if the sights in rows and columns & duplicate digits are valid then it's true an fits our conditions.
	{
		if (i >= max * max - 1) // if it reach the end of the field than it returns 1 (it means that we found a solution)
			endcode = 1;
		else
		{
			field[i + 1] = 1; // if not we check the next cell we add 1 to the next cell.
			endcode = check_node(i + 1, field, sights, max); // we call full function again + 1 cell forward.
		}
	}
	else
		endcode = not_valid(i, field, sights, max); // if the cell is not valid we call not_valid function.
	return (endcode);
}
