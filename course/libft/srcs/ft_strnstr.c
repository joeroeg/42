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
• haystack – character pointer of the string to be searched 
• needle – character pointer of the substring to find within haystack 
• len – size_t variable with the maximum length of haystack

Return value: 
• Char pointer - returns a pointer to the beginning of the located substring, or NULL if the substring is not found. 

Features: 
• Checks for NULL pointers 

Tools and Techniques: 
• strlen - to calculate the length of haystack and needle 
• strncmp - to compare haystack with needle 
• if statement - to check if the substring is located in haystack

Important Requirements: 
• Need to make sure len is within the bounds of haystack 
• Need to make sure haystack and needle are not NULL pointers 
• Need to compare haystack with needle correctly 
• Need to return a pointer to the beginning of the located substring, or NULL if the substring is not found.

Additional Information: 
• This function is case sensitive, so if you are looking for a substring with different casing, you will not find it.
• Similar functions in C language include strstr(), memmem(), and strcasestr().

char *ft_strnstr(const char *haystack, const char *needle, size_t haystack_len)
{
	for (unsigned int i = 0; i < haystack_len && haystack[i]; i++) {
		if (haystack[i] == needle[0]) {
			if (strncmp(&haystack[i], needle, haystack_len - i) == 0)
				return (char *)&haystack[i];
			else
				continue;
		}
	}
	return (NULL);
}

*/

char *ft_strnstr(const char *haystack, const char *needle, size_t haystack_len)
{
  size_t needle_len = ft_strlen(needle);

  if (!needle_len)
		return (char *)haystack;

  while (haystack_len >= needle_len && haystack != NULL)
  {
	  if (ft_strncmp(haystack, needle, needle_len) == 0)
		  return (char *)haystack;

	  haystack_len--;
	  haystack++;
  }
  return (NULL);
}
