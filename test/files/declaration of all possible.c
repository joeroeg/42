/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:18:40 by hzhukov           #+#    #+#             */
/*   Updated: 2022/09/19 23:22:45 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_comb()
{
	int	character = '2';
	int	number = 1;
 	char	sentence[] = "Hello world!"; // Here we use array to store a sentence
	char	*sentence_2 = "Hello world!"; // Here we use pointer that create an array to store a sentence
	int array[] = {8};

	write(1, &array[1], 1);
	write(1, &sentence[0], 12);
	write(1, "\n", 1);
	write(1, &sentence_2[0], 12);
	write(1, "\n", 1);
	write(1, &character, 1);
	write(1, &number, 1);
}

int  main(void)
{
	ft_print_comb();	
	return (0);
}
