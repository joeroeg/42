/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrolet- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:50:52 by odrolet-          #+#    #+#             */
/*   Updated: 2022/09/27 18:13:16 by odrolet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] > 31) && (str[i] < 127))
			i++;
		else
			return (0);
	}
	return (1);
}
int main()
{
	char str[] = {'\n'};
	int i;
	i = ft_str_is_printable(str);
	printf("%d", i);
	return (0);
}
