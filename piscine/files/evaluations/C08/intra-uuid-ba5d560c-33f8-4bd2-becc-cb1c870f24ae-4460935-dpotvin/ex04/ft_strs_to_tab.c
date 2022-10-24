/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:03:56 by dpotvin           #+#    #+#             */
/*   Updated: 2022/10/02 16:18:50 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_copystr(char *str)
{
	int		i;
	char	*s;

	s = (char *)malloc(ft_strlen(str));
	if (!s)
		return (0);
	i = 0;
	while (*str)
	{
		s[i] = *str++;
		i++;
	}
	s[i] = '\0';
	return (s);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!arr)
		return (0);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].copy = ft_copystr(av[i]);
		if (i == ac - 1)
			arr[i].str = 0;
		else
			arr[i].str = av[i];
		i++;
	}
	return (arr);
}
