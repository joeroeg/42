/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:22 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/27 18:42:13 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	outlen;
	char	*output;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		outlen = 0;
	else
	{
		if (ft_strlen(&s[start]) > len)
		outlen = len;
		else
		outlen = ft_strlen(&s[start]);
	}
	output = (char *)malloc(outlen + 1);
	if (!output)
		return (NULL);
	i = 0;
	while (i < outlen)
	{
		output[i] = s[start + i];
		i++;
	}
	output[i] = '\0';
	return (output);
}
