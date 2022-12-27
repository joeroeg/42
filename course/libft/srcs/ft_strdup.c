/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:16:44 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:36:44 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

The strdup function allows us to duplicate a string without having to worry about the original string being changed. 
It is used in many applications, such as when copying strings from one variable to another. It is also used in memory management, where it can be used to create a copy of a string so that the original string can be freed up for other purposes. 
An interesting fact about this function is that it does not actually allocate any new memory, but simply returns a pointer to the existing memory location of the source string.
*/
char *ft_strdup(const char *str1)
{
    char *str2;
    int i;

    i = 0;
    while (str1[i] != '\0')
        i++;

    str2 = malloc(sizeof(char) * (i + 1));
    if (str2 == NULL)
        return (NULL);
    i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    return (str2);
}
