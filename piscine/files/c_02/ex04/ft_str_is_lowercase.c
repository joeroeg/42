/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrolet- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:25:20 by odrolet-          #+#    #+#             */
/*   Updated: 2022/09/27 10:38:13 by odrolet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}
int main()
{
	char str[] = {"9"};
	int i;
	i = ft_str_is_lowercase(str);
	printf("%d", i);
	return (0);
}
