/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:22 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:37:15 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
This code creates a substring of a given string. 
It takes in a string, the start index of the substring and the length of the substring as arguments. 
The function then allocates memory for the substring and iterates through the characters of the original string starting at the given start index and adds them to the substring until the length is reached. 
The substring is then terminated with a null character and returned.

Extra:
This function is important because it allows for the extraction of a substring from a given string. 
It is commonly used in string manipulation and can be used to extract a specific part of a string or to find a certain pattern within a string. 
It is also useful for formatting strings and other text processing tasks. 
Additionally, this function can be used as a building block for more complex string manipulation algorithms.

Other similar functions include strncpy(), strncat(), strndup(), and strncmp(). These functions are used for copying, concatenating, duplicating, and comparing strings respectively.
*/
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	unsigned int i;

	if (start >= ft_strlen(s))
		return (NULL);
	substr = (char*)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
