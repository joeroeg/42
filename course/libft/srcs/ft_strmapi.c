/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:02 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:37:01 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_strmapi is a C library function that applies a function to each character of a string. 
It takes two arguments - a string and a pointer to a function. 
It creates a new string, iterates over the input string, and applies the passed in function to each character of the input string. 
The result of the function is then stored in the output string, which is the return value of the function.



*/

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *new_str;

	if (!s || !f)
		return (NULL);
	new_str = ft_strdup(s);
	if (!new_str)
		return (NULL);
	i = 0;
	while (*(new_str + i))
	{
		*(new_str + i) = f(i, *(new_str + i));
		i++;
	}
	return (new_str);
	
}
