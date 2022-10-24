/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkadu <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:23:42 by bkadu             #+#    #+#             */
/*   Updated: 2022/10/01 14:12:50 by bkadu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;

		tmp = dest;
	while (*src != '\0')
	{
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp);
}
