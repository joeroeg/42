/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:34:55 by hzhukov           #+#    #+#             */
/*   Updated: 2022/09/27 20:13:49 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && dest[i] && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(dest));
}
int main(void)
{
    char src[] = "source text";
    char dest[] = "destination text";
    ft_strlcpy(dest, src, sizeof(dest));
    printf("destination: %s\n", dest);
    return(0);
}
/*
Gabriel copy
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;

	i = 0;
	len_src = ft_lenstr(src);
	while (src[i] && (size - i) > 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size - i > 0)
		dest[i] = '\0';
	return (len_src);
}
*/