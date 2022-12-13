/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:25:41 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/11 17:35:42 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*


Prototype: void *memset (void *__s, int __c, size_t __n)

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

void	*ft_memset(void *str, int c, size_t n)
{
  *str = "";

	return (0);
}



/*
1. Я не знаю могу ли поинтером указать на предложение в "" двойных скобах. насколько я понимаю то когда мы привязываем к поинтеру значение о указывает на адрес первого значения
*/