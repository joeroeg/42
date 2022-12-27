/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:12 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:37:06 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
Description: 
The strnstr() function locates the first occurrence of the string needle in the string haystack, where not more than haystack_len characters are searched. 
It returns a pointer to the located string needle in the string haystack, or NULL if the string needle is not found.
For example, if haystack is "Hello World" and needle is "World", then the strnstr() function will return a pointer to the string "World" in the string "Hello World".

Parameters: 
- haystack – character pointer of the string to be searched 
- needle – character pointer of the substring to find within haystack 
- len – size_t variable with the maximum length of haystack

Return value: 
- If needle is an empty string, haystack is returned;
- if neddle occurs nowhere in haystack, NULL is returned;
- If the needle is found in the haystack, a pointer to the first character of the first occurrence of the needle in the haystack is returned.

Tools and Techniques: 
- strlen - to calculate the length of haystack and needle 
- strncmp - to compare haystack with needle 
- statement - to check if the substring is located in haystack

Important Requirements: 
- Need to make sure len is within the bounds of haystack 
- Need to make sure haystack and needle are not NULL pointers 
- Need to compare haystack with needle correctly 
- Need to return a pointer to the beginning of the located substring, or NULL if the substring is not found.

Additional Information: 
- This function is case sensitive, so if you are looking for a substring with different casing, you will not find it.
- Similar functions in C language include strstr(), memmem(), and strcasestr().

Requirements:

*/

char	*ft_strnstr(const char *haystack, const char *neddle, size_t len)
{
	size_t n;
 
	if (*neddle == '\0')
		return ((char*)haystack);
	n = ft_strlen(neddle);
	while (*haystack != '\0' && len-- >= n)
	{
		if (ft_strncmp(haystack, neddle, n) == 0)
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
