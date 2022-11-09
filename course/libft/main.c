/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:28:07 by hzhukov           #+#    #+#             */
/*   Updated: 2022/11/09 10:36:07 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);


int	main(void)
{
	char	str[50];

	strcpy(str, "This is string.h library function");
	puts(str);

	memset(str, '-', 7);
	puts(str);
	return (0);
}


/*
{
	char	*str;
	int	result;

	str = "Hello World";
	result = ft_strlen(str);
	printf ("%d", result);
	return (0);
}
*/