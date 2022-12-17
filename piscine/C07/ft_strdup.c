/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:23:03 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/06 18:29:39 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strdup(char *src)
{
    int len;
    char *str;
    
    len = ft_strlen(src);
    str = (char*)malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < len; i++)
        str[i] = src[i];
    return str;
}

int main()
{
	char *src = "Hello, world!";
	char *str = ft_strdup(src);
	
    printf("%s\n", str);
	return 0;
}