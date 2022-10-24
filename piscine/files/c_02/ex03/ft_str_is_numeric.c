/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrolet- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:55:40 by odrolet-          #+#    #+#             */
/*   Updated: 2022/09/26 23:40:35 by odrolet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 48) && (str[i] <= 57))
			i++;
		else
			return (0);
	}
	return (1);
}

int main()
{
	char str[] = {"z"};
	int i;
	i = ft_str_is_numeric(str);
	printf("%d", i);
	return (0);
}
