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

first test:
int ft_strncmp(const char *str1, const char *str2, size_t n) 
{
    while (n && *str1 && (*str1 == *str2)) 
    {
        ++str1;
        ++str2;
        --n;
    }
 
    if (n == 0) 
    {
        return 0;
    }
    else 
    {
        return (*(unsigned char *)str1 - *(unsigned char *)str2);
    }
}
    if (n==0 || *str1=='\0' || *str2=='\0') {
        return 0;
    }

*/

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i = 0;
    while (i < n && str1[i] && (str1[i] == str2[i])) 
	i++;
    if (i == n || str1[i] == str2[i]) 
        return 0;
    else if (str1[i] < str2[i]) 
        return -1;
    else
        return 1;
}
