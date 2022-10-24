/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrolet- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:39:01 by odrolet-          #+#    #+#             */
/*   Updated: 2022/09/27 10:50:06 by odrolet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while ((str[i]) != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			i++;
		else
			return (0);
	}
	return(1);
}
int main()
{
	char str[] = {"E"};
	int i;
	i = ft_str_is_uppercase(str);
	printf("%d", i);
	return(0);
}
