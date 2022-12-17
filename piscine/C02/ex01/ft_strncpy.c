/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:31:46 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/04 03:56:35 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
int main(void)
{
    int n = 5;
    char source[50] = "Hello World";
    char destination[50] = "";
    ft_strncpy(destination, source, n);
    printf("function return: %p %s\n", ft_strncpy(destination, source, n),
    ft_strncpy(destination, source, n));
    printf("source: %p %s\n", source, source);
    printf("destination: %p %s\n", destination, destination);
	return(0);
}