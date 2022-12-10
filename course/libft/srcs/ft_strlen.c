/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:27:05 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/08 22:53:42 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
  const char *ptr 
  
  ptr = str; // This line points to the beginning of the input string
  while(*ptr != '\0') // This line defines a loop that will keep running until the end of the string is reached
  {
	ptr++;
	}
	return (ptr - str); // This line subtracts the pointer at the start of the string from the pointer at the end of the string, giving us the length of the string
}
