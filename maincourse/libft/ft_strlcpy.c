/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhukov <hezhukov@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:37:19 by hezhukov          #+#    #+#             */
/*   Updated: 2023/10/18 18:20:25 by hezhukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (srclen);
	if (srclen < dstsize)
	{
		ft_memmove(dst, src, srclen + 1);
	}
	else
	{
		ft_memmove(dst, src, dstsize);
		dst[dstsize - 1] = '\0';
	}
	return (srclen);
}
