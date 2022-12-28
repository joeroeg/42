/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:02 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/27 18:40:17 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;

	if (!s || !f)
		return (NULL);
	new_str = ft_strdup(s);
	if (!new_str)
		return (NULL);
	i = 0;
	while (*(new_str + i))
	{
		*(new_str + i) = f(i, *(new_str + i));
		i++;
	}
	return (new_str);
}
