/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 00:15:26 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/03 18:21:28 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	j = 0;
	while (src[j] != '\0' && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (ft_strlen(dest));
}

int main()
{
	char dest[50] = "Hello aar;ljhgapeorh";
	char src[50] = "Worldasklrgj;air!";
	unsigned int size = 100;
	ft_strlcat(dest, src, size);
	printf("%s", dest);
	return (0);
}