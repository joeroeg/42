/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:25:41 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/11 12:23:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters:
str − This is a pointer to the block of memory to fill.
c − This is the value to be set. The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.
n − This is the number of bytes to be set to the value.

Return Value:
This function returns a pointer to the memory area str.

Example:
#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "almost every programmer should know memset!";
  memset (str,'-',6);
  puts (str);
  return 0;
}

Output:

------ every programmer should know memset

*/

#include "libft.h"

void *memset(void *str, int c, size_t n)
{
	return (0);
}