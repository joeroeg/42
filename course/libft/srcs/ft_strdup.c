/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:16:44 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/27 18:39:24 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*str2;
	int		i;

	i = 0;
	while (str1[i] != '\0')
	i++;
		str2 = malloc(sizeof(char) * (i + 1));
	if (!str2)
		return (NULL);
	i = 0;
	while (str1[i] != '\0')
	{
	str2[i] = str1[i];
	i++;
	}
	str2[i] = '\0';
	return (str2);
}
