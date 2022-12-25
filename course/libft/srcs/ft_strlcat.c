/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:16:53 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:36:50 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
The strlcat function should take a destination string, as well as a source string, and combine the two.
The size of the destination buffer should also be provided, in order to ensure that the combined strings do not exceed the size of the buffer.
The function should return the total length of the combined strings and guarantee to NUL-terminate the result as long as there is at least one byte free in dst).
Note that a byte for the NUL should be included in size. Also note that strlcpy() and strlcat() only operate on true ''C'' strings.
This means that for strlcpy() src must be NUL-terminated and for strlcat() both src and dst must be NUL-terminated.

Return values:
The strlcpy() and strlcat() functions return the total length of the string they tried to create. 
For strlcat() that means the initial length of dst plus the length of src. While this may seem somewhat confusing, it was done to make truncation detection simple.


Extra info:
Truncation detection is the process of detecting when a string has been truncated, meaning that some of its characters have been cut off.
This is important when dealing with strings, as it can lead to unexpected and undesirable behavior.
Strlcpy() and strlcat() make this process easier, as they return the total length of the combined strings. By comparing this number to the limit of the destination buffer, it is possible to detect if any characters have been cut off.
*/

size_t ft_strlcat(char *dst, char const *src, size_t size)
{
	size_t len_dst = strlen(dst);
	size_t len_src = strlen(src);
	if (len_dst >= size)
		return len_src + size;
	if (len_src < size - len_dst)
		ft_memcpy(dst + len_dst, src, len_src + 1);
		else
		ft_memcpy(dst + len_dst, src, size - len_dst - 1);
		dst[size - 1] = '\0';
	return (len_dst + len_src);
}
