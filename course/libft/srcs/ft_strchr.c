/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:16:38 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:36:41 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: Strchr is a C library function that is used to locate a character in a string. It takes two parameters - a string and a character - and it returns a pointer to the first occurrence of the character in the string. 
Prototype: char *strchr(const char *s, int c); 
Parameters: 
s - is the string you want to search through for the character you are looking for.
c - is the character that you want to find in the string.  
Return value:
The return value of strchr is a pointer to the first instance of the character in the string. 
If the character is not found in the string, then the function will return NULL.
Example:
char string[] = "This is a sample string";
char ch = 's';
char *ptr = strchr(string, ch);

printf("String after |%c| is - |%s|\n", ch, ptr);

Exatra information:
An important thing to note is that strchr does not distinguish between upper and lower case characters. So if you are looking for the letter ‘s’, it will find both the upper and lower case versions in the string. 

Implementation:
1. increment looping through the characters in the string, one by one, until it finds the character that is being searched for
2. expression *s != (char)c to check if the current character is equal to the target character. 

*/
char *ft_strchr(const char *s, int c)
{
  while (*s != (char)c)
    if (!*s++)
      return 0;
  return (char *)s;
}