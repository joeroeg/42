/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:15 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/27 18:41:44 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*ptrs = (NULL);

	while (*str)
	{
		if (*str == c)
		ptrs = str;
		str++;
	}
	if (!c)
		return ((char *) str);
	return ((char *) ptrs);
}
