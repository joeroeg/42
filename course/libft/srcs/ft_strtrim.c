/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:18 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/27 18:42:00 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start_index;
	int		end_index;
	char	*trimmed_string;

	if (!s1)
		return (0);
	start_index = 0;
	while (s1[start_index] && ft_strchr(set, s1[start_index]))
		start_index++;
	end_index = ft_strlen(s1);
	while (end_index && ft_strchr(set, s1[end_index]))
		end_index--;
	trimmed_string = ft_substr(s1, start_index, end_index - start_index + 1);
	return (trimmed_string);
}
