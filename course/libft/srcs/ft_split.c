/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:16:35 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:36:39 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	int				i;
	unsigned long	wordcount;

    i = 0;
	wordcount = 0;
	if (*s == '\0')
		return (wordcount);
    
	while (s[i]) {
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			wordcount++;
		i++;
	}
	return (wordcount);
}

char **ft_split(char const *s, char c) 
{ 
    int i = 0;
	int j = 0;
	int len = 0;
	int wordcount = ft_wordcount(s,c);
	char** strarr = (char**)malloc(sizeof(char*) * wordcount); 
	
	while (i < wordcount) 
	{ 
		while (s[j] == c) j++;  

		if (s[j]) 
		{ 
			len = 0; 
			while (s[j] && s[j] != c) {j++; len++;} 
			strarr[i++] = ft_substr(s, j - len, len); 
		} 
	} 
	strarr[i] = NULL; 
	return strarr; 
}
