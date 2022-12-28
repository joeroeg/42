/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:16:50 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/27 18:39:42 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;
	int		k;

	if (!s1 || !s2)
		return (NULL);
	new_str = malloc(strlen(s1) + ft_strlen(s2) + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	k = i;
	while (s2[j] != '\0')
	{
		new_str[k] = s2[j];
		j++;
		k++;
	}
	new_str[k] = '\0';
	return (new_str);
}
