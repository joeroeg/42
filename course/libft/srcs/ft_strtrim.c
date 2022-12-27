/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:18 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:37:12 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
ft_strtrim is a function that trims leading and trailing characters from a string. 
It takes in two parameters, s1 which is the string to trim, and set which is the set of characters to trim from the string. The function returns a pointer to the trimmed string. 
This function can be used in many applications, such as when processing user input or when trimming whitespace from strings.
*/
char *ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	int i;
	char *str;

	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) && s1[start] != '\0')
		start++;
	while (ft_strrchr(set, s1[end - 1]) && end > 0)
		end--;
	if (end < start)
		end = start;
	str = (char *)malloc((end - start + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}