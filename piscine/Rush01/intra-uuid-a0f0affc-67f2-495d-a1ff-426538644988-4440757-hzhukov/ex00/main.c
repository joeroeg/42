/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:44:00 by fgeslin           #+#    #+#             */
/*   Updated: 2022/09/25 17:01:09 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str); // write a string it's an array of characters.

int		ft_strlen(char *str); // get the lenghth of the string.

int		check_node(int i, int *field, int *sight, int max);

void	display_tab(int *tab, int max); // print final array

void	strint(char *str, int *nbs, int size); // to transform an array of string in array of integers.

int	main(int argc, char *argv[]) // argc (./a.out arg1, arg2 ... the number of arguments that when we call the excutable file. argv - is an array that contain each argument. I have a question why do use pointer(*) and square brackets []*argv[] in parameters.
{
	int	*field; // initialazing an array to populate our square that we return.
	int	max; // maximum of height of our box
	int	*sights; // we use this variable to transform argv into integers to calculate but we do that only because our subject require that. In practice we can use argv as an array of digits without extra transformation.

	if (argc == 2) // we check that we have 2 arguments (a.out & input numbers) according to the subject.
	{
		if ((ft_strlen(argv[1]) + 1) % 8 == 0) // we check that the argument is valid. We check that we have a square in case if we did a mistake when fill with our arguments.
		{
			max = (ft_strlen(argv[1]) + 1) / 8; // we need that to identify our maximal value in our square  max size of the box.
			sights = malloc(max * 4 * sizeof(int)); // to keep space in memory for sights. We book some memory. sizeof(int)) - it's used for calculation the size that we book. ???
			field = malloc(max * max * max * sizeof(field[0])); //book the memory that same as previous
			strint(argv[1], sights, max * 4); //to transform argv that is in char into integers
			field[0]++; // we start with 0 because malloc equals zero
			if (check_node(0, field, sights, max) == 1) // it's recursive function that check if we found a solution or no.
				display_tab(field, max); // if true then print the final square.
			else
				ft_putstr("Error: Nothing found"); // print error if have not found the solution
		}
		else
			ft_putstr("Error: Wrong args"); // print error if wrong arguments in input
	}
	else
		ft_putstr("Error: Wrong args"); // print error if wrong arguments in input
	return (argc);
}
