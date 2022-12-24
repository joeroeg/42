/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:15:57 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/16 16:24:29 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
https://www.geeksforgeeks.org/write-memcpy/

Pointer arithmetic is used when iterating through the source and destination data in order to perform the copy. The pointers are incremented as each byte is copied from source to destination.
Pointer arithmetic works by incrementing or decrementing the value of the pointer in order to point to the next or previous element in memory. In this case, the pointers are incremented in order to move through the source and destination data as it is copied.

 Typecasting can be used in a variety of ways. One way is to use the (type) operator, where type is the desired data type to which you are casting; for example, (int) for integer type. Another way is to use the C-style cast, which involves specifying the desired type within parentheses; for example, (int). A third option is to use the static_cast operator, which is safer than the other two options as it performs additional checks to ensure the type can be safely cast.
1. An example of using the static_cast operator is as follows:
int x = 5; 
float y = static_cast<float>(x); 
This statement casts the value of the integer x to a float and assigns it to the variable y.

2. Another example of typecasting is using the C-style cast:
long l = 15; 
int i = (int) l; 
This statement casts the value of the long l to an int and assigns it to the variable i.

3. Typecasting can also be used to cast pointer types. For example:
float* y = new float(5.5);
int* i = (int*) y; 
This statement casts the float pointer y to an int pointer and assigns it to the variable i.

It's important that typecasting should be used with caution as it can result in unintended side effects. For example, if an integer is casted to a float and the resulting float is outside of the range of the original integer type, the resulting data may be incorrect. Additionally, typecasting between pointer types is also unsafe and can lead to unexpected behavior.

*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}