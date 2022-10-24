/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afletche <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:39:40 by afletche          #+#    #+#             */
/*   Updated: 2022/10/02 11:25:58 by afletche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str) - 1)
	{
		if (!(str[i] >= 127))
			i++;
		if (!(str[i] >= 0) && !(str[i] <= 31))
			i++;
		else
			return (0);
	}
	return (1);
}
