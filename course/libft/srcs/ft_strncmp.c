/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:08 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:37:03 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strncmp() is used to compare two strings up to a specified number of characters. 
It works in the same way as strcmp(), but only compares the first (at most) n bytes of s1 and s2.
It is important to note that a null character is not compared. 
Also, the comparison is case sensitive. 
The strncmp() function is declared in string.h header file. 

Parameters:
str1 - This is the first string that is to be compared.

str2 - This is the second string that is to be compared.

n - This is the maximum number of characters to be compared.

Return Value:
This function returns an integer less than, equal to, or greater than zero if str1 is found, respectively, to be less than, to match, or be greater than str2.

*/

int ft_strncmp(const char *s1, const char *s2, size_t n) 
{ 
    if (n == 0) 
        return 0; 

    while (n-- > 1 && *s1 && *s1 == *s2) 
    { 
        s1++; 
        s2++; 
    } 
  
    return (*(unsigned char*)s1 - *(unsigned char*)s2); 
}
