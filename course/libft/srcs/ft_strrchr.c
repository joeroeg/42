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

to handle with '\0' input wee need to add extra check and return str
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
	if (c == '\0')
		return (char *) str;

    return (char *) last;
}
