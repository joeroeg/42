/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrolet- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:57:27 by odrolet-          #+#    #+#             */
/*   Updated: 2022/09/26 23:21:33 by odrolet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			i++;
		else if ((str[i] >= 97) && (str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main()
{
	char	str[] = {"-"};
	int i;
	i = ft_str_is_alpha(str);
	printf("%d", i);
	return (0);
}
