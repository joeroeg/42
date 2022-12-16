/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:15:57 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 17:33:18 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Description:
The memcpy function is used to copy data from one memory location to another. 
It takes an input of two memory addresses, a source and a destination, and copies the contents of the source to the destination. 
The function is useful for quickly and efficiently transferring data between different parts of a program.

Prerequisite:
To recreate the memcpy c function, you will need to understand the
- basic principles of memory management (pointers and their use, setting a size limit for copying, as well as deciding whether to perform a shallow or deep copy.)
- good understanding of the destination and source memory addresses and their sizes.
- implications of aligning different memory addresses, as this can have an impact on the performance of the program.

Prototype:
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n); 

Return value:
destination

Parameters:
destination - pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.
source - pointer to the source of data to be copied, type-casted to a pointer of type const void*.
num - Number of bytes to copy. size_t is an unsigned integral type.

Example:
#include <stdio.h>
#include <string.h>
 
int main(void) {
    char source[] = "src";
    char dest[6];
    memcpy(dest, source, sizeof(source));
    printf("Destination after memcpy: %s\n", dest);
    return 0;
}

*/

#include "libft.h"

//void	*ft_memcpy(void *dst, const void *src, size_t n)
//{
//	size_t i;

//	if (!dst && !src)
//		return (0);
//	i = 0;
//	while (i < n)
//	{
//		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
//		i++;
//	}
//	return (dst);
//}


void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *d = dst;
	const char *s = src;
	if (n == 0)
	{
		return (NULL);
	}
	while (n--)
	*d++ = *s++;
	return (dst);
}