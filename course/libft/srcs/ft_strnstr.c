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
- Char pointer - returns a pointer to the beginning of the located substring, or NULL if the substring is not found. 

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
- should work with basic input
- should work with an empty haystack
- should work with an empty neddle
- should work with an empty haystack_len
- should work with the same pointer as an input ft_strnstr(s1, s1, max)
- requires that the memory region beginning at s1-4096+size and ending at s1-1, and the memory region beginning at s2-4096+size and ending at s2-1 both be valid memory regions that can be accessed. It also requires that both memory regions be allocated and owned by the same process so that the process can set the protection flags.
- when writing a strnstr function, it is important to take into account that if the same pointer is used for both haystack and needle, and a length value larger than the size of the haystack is used, the function will not work properly. Therefore, it is important to make sure that the haystack and needle pointers are different from each other, and that the length value does not exceed the size of the haystack.
- should be relatively fast (it is important to make sure that the strnstr is optimized to minimize time and resources used. it may be beneficial to use data structures such as hash tables to make searches faster.)
- do not crush when null parameter is sent with a size of 0

*/

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t len = ft_strlen(s2);

	if (len == 0)
		return (char *)s1;

	while (n >= len && *s1) {
		if (*s1 == *s2 && !ft_memcmp(s1, s2, len))
			return (char *)s1;
		s1++;
		n--;
	}

	return (NULL);
}
