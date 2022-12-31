/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:12 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/27 18:41:33 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *neddle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	length;

	if (!neddle[0])
		return ((char *)haystack);
	length = ft_strlen(neddle);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (i + j < len && haystack[i + j] == neddle[j] && j < length)
			j++;
		if (j == length)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
