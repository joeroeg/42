/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:15:49 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:36:15 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
- memchr is a function that searches an array for a specified character
- It searches for the first instance of the character in the given array and returns it’s address

Parameters: 
- void* s: pointer to the array to be searched
- int c: character to search for
- size_t n: size of the array to be searched

Return value:
- If the character is present in the array, the function returns a pointer to the first occurrence of the character in the array
- If the character is not found, the function returns NULL.

Features: 
- memchr is used to quickly search through arrays to find one or more specified characters 
- It can save time as compared to looping through the array and manually searching for the desired character 
- It is usually implemented using C or C++, but other languages could be used as well 
- can be easily incorporated into larger programs and algorithms by adding it to a function call where needed
- function runs in constant time, which makes it an efficient way of searching through an array for a particular character. This is especially useful when the arrays are large and the desired character could be anywhere in the array.
- thread-safe function, which means it can be used in multi-threaded applications without any additional synchronization. This makes it a great choice for programs that require fast and reliable character searches in large arrays.
- to compare two separate strings for equality. By searching through both strings and looking for matching characters at the same index, it's possible to quickly determine whether the two strings are equal or not.
- ability to search for a character within a certain range of memory. This can be useful if we want to limit the search to a certain part of an array, eliminating the need to search through the entire array.
- It can be used to search through any type of array, whether it's a char array, an int array, or an array of structs. As long as the data type is supported, memchr can be used to quickly and efficiently find the data we're looking for.
*/
void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p = s;
    while (n-- != 0)
	{
        if ((unsigned char)c == *p++)
		{
            return (void *)(p-1);
        }
    }
    return (NULL);
}