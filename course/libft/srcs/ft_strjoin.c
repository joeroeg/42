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

char	*allocate_string_memory(char const *s1, char const *s2)
{
	char	*new_str;

	new_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (NULL);
	return (new_str);
}

void	copy_s1_to_new_string(char const *s1, char *new_str)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
}

void	copy_s2_to_new_string(char const *s2, char *new_str, int i)
{
	int	j;
	int	k;

	j = 0;
	k = i;
	while (s2[j] != '\0')
	{
		new_str[k] = s2[j];
		j++;
		k++;
	}
}

void	add_null_terminator(char *new_str, int k)
{
	new_str[k] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	new_str = allocate_string_memory(s1, s2);
	if (new_str == NULL)
		return (NULL);
	copy_s1_to_new_string(s1, new_str);
	i = ft_strlen(s1);
	copy_s2_to_new_string(s2, new_str, i);
	add_null_terminator(new_str, i + ft_strlen(s2));
	return (new_str);
}
