/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:16:56 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:36:53 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strlcpy is a function used to copy data from one memory location to another. 
It takes three parameters as inputs – the destination buffer, a pointer to the source string, and the size of the destination buffer – and returns the length of the source string.
The function will truncate the source string to fit within the size of the destination buffer, and always adds a null terminator at the end.

Truncate means to reduce the size of something by removing the end part. strlcpy function truncates the source string by removing any characters that are outside the size of the destination buffer. The null terminator is added at the end so that the resulting string is properly terminated and any functions that interact with it can identify the end of the string.
It is important to add a null terminator at the end of the string because it helps other functions that use the string to identify its end. 
Without the null terminator, the functions may not be able to determine where the end of the string is and may operate on unintended parts of memory that could corrupt system data or cause other errors. 
By implementing the null terminator in the strlcpy function, it ensures that the strings remain properly terminated and that any system errors are avoided.


	if (dstsize == 0)
		return (srclen);
it is used to check if the destination buffer size is 0. 
If it is, then the function should return the length of the source string without copying any data. 
This is useful if you want to know the length of a string without actually copying it into a buffer it allows to determine the size without having to copy it.

We need to  calculate the source string length
Copy the source string
Copy a truncated version
Add a null terminator
Return the length of the source string
*/

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srclen;

	srclen = ft_strlen(src);
	
	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (srclen);
    if (srclen < dstsize)
	{
        ft_memmove(dst, src, srclen + 1);
    }
    else
	{
        
        ft_memmove(dst, src, dstsize - 1);
        dst[dstsize - 1] = '\0';
    }
    return (srclen);
}

