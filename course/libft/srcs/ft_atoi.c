/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:15:24 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:35:27 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: ft_atoi is a function that takes in a string of characters and converts it into an integer.

Parameters: 
-nptr: This is a pointer to the string of characters that is to be converted.

Return value: The return value of this function is an integer.

Features: 
-This function will ignore any leading whitespace characters.
-It will also check for signs such as + or - and act accordingly.
-It will then iterate through each character in the string and convert it to an integer.

Implementation: To implement this function, you will need to use basic string manipulation techniques as well as knowledge of how integers are represented in memory. You will also need to use functions such as isspace(), isdigit(), and ft_issign() to check for whitespace, digits, and signs respectively. Additionally, you may need to use bitwise operators to manipulate the integer values in memory.
*/
static int	ft_isspace(char c)
{
	return (c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == ' ');
}

int ft_atoi(const char *nptr)
{
	int output;
	int negative;
	size_t i;

	output = 0;
	negative = 1;
	i = 0;
	
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			negative = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		output *= 10;
		output += nptr[i] - '0';
		i++;
	}
	return (output * negative);
}
