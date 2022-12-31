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

void	get(const char *s, unsigned int start, size_t len, size_t *sub)
{
	size_t	str_length;

	str_length = ft_strlen(s);
	if (str_length < start)
		*sub = 0;
	else if ((start < str_length) && (start + len <= str_length))
		*sub = len;
	else
		*sub = str_length - start;
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		i;
	char	*substr;
	size_t	s_len;

	if (!s)
		return (0);
	get(s, start, len, &s_len);
	substr = ft_calloc((s_len + 1), sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (s && s_len--)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
