/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:15 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:37:09 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strrchr() function returns a pointer to the last occurrence of the character c in the string str. 
If the character is not found, it returns a null pointer.
It is important to note that this function is case-sensitive i.e. if you are looking for 'a' and there is an 'A' in the string, strrchr() will return a null pointer.


This function takes two parameters: a string (str) and an integer (c).
It searches for the last occurrence of character c in the string str. If it finds it, then it returns a pointer to its location; otherwise, it returns NULL.
The search begins at the end of the string and progresses backward through successive elements until either c is found or no more characters remain in the string.
If c is '\0', this function will return a pointer to the null-terminator located at the end of str.

The const char *last = (NULL) is used to store the pointer to the last occurrence of character c in the string str.
If no occurrences of character c are found, then this variable will remain NULL and indicate that no matches were found.

*/

char *ft_strrchr(const char *str, int c)
{
    const char *last = (NULL);

    while (*str)
	{
        if (*str == c)
            last = str;
        str++;
    }
	if (!c)
		return (char *) str;

    return (char *) last;
}
