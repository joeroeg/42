/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:31:28 by hzhukov           #+#    #+#             */
/*   Updated: 2022/09/27 19:56:56 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
char	*ft_strcpy(char *destination, char *source)
{
	int	i;

	i = 0;
	while (source[i])
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return (destination);
}

int main(void)
{
    char destination[] = "destination text";
    char source[] = "source text";
//  printf("%s %s\n", destination, source);
    ft_strcpy(destination, source);
    printf("%s\n", ft_strcpy(destination, source));
    return(0);
}
