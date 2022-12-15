/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:25:41 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:37:40 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/*
Description:
Memset functions are used to fill a block of memory with a particular value. 
They are used to set a certain amount of memory to 0, copy data from one location to another, as well as set a specific value for a given number of bytes.
To reproduce the source code, you will need to understand how the memset function works, find the required parameters for the function, and then write the code using those parameters.


Declaration:
void *memset(void *str, int c, size_t n)

Parameters:
s − This is a pointer to the block of memory to fill.
c − This is the value to be set. The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.
n − This is the number of bytes to be set to the value.

Return Value:
This function returns a pointer to the memory area str.

Example:
#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "Any fool can write code that a computer can understand. Good programmers write code that humans can understand.";
  memset (str,'-',5);
  puts (str);
  return 0;
}

Output:

------fool can write code that a computer can understand. Good programmers write code that humans can understand.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;

	ptr = (unsigned char *)s;
	while (i < n)
		ptr[i++] = (unsigned char)c;
	return (s);
}
