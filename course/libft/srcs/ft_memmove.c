/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:16:00 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:36:21 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
The notation used in the first while loop, *(d + len) = *(s + len);, assigns the characters from the source 's' to the destination 'd' in reverse order starting from the end of the arrays. The notation used in the second while loop, *(d++) = *(s++);, assigns the characters from the source 's' to the destination 'd' in the same order starting from index 0. This is done to avoid any overlapping of the data being copied which could lead to unexpected results.

Also I can use this notation
for (int i = len - 1; i >= 0; i--) {
    d[i] = s[i];
}

Second While loop:
for (int i = 0; i < len; i++) {
    d[i] = s[i];
}

the difference between NULL and 0. NULL is a pointer that points to nothing, while 0 is the numerical value of 0. In the code, returning NULL indicates that the operation has failed, while returning 0 indicates that the operation was successful.

Problems:
I do not understand why memmove() is better than memcpy() when addresses overlap. Moreover I hane inconsisten results with original functions. but unit test passes
joe@joe:~/Desktop/42/course/libft$ gcc main.c libft.a && ./a.out
origin string: 123456789
origin string: 123456789
mcpy overlap:  11111111111113456789
move overlap:  1113456789
*** stack smashing detected ***: terminated
Aborted (core dumped)
joe@joe:~/Desktop/42/course/libft$ gcc main.c libft.a && ./a.out
origin string: 123456789
origin string: 123456789
mcpy overlap:  1123456789
move overlap:  
*** stack smashing detected ***: terminated
Aborted (core dumped)

*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (!dst && !src)
		return (NULL);
	if (d > s)
	{
		while (len-- > 0)
		{
			*(d + len) = *(s + len);
		}
	}
	else
	{
		while (len-- > 0)
		{
		*(d++) = *(s++);
		}
	}
	return (dst);
}
