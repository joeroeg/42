/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:16:35 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/27 18:39:04 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_allfree(char **p)
{
	int	i;

	i = 0;
	while (p[i])
		free(p[i++]);
	free(p);
}


static size_t	ft_wordcount(char const *s, char c)
{
	int				i;
	unsigned long	wordcount;

	i = 0;
	wordcount = 0;
	if (*s == '\0')
		return (wordcount);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		wordcount++;
		i++;
	}
	return (wordcount);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		len;
	int		wordcount;
	char	**strarr;

	i = 0;
	j = 0;
	wordcount = ft_wordcount (s, c);
	strarr = (char **)malloc(sizeof(char *) * wordcount);
	if (!strarr)
		return (NULL);
	while (i < wordcount)
	{
		while (s[j] == c)
		j++;
		if (s[j])
		{
			len = 0;
			while (s[j] && s[j] != c)
			{
			j++;
			len++;
			}
		strarr[i++] = ft_substr(s, j - len, len);
		}
		if (!strarr)
			return (ft_allfree(strarr), NULL);
	}
	//strarr[i] = (NULL);
	return (strarr);
}
