/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangaso <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:28:27 by jsangaso          #+#    #+#             */
/*   Updated: 2022/10/02 11:33:49 by jsangaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_r;
	unsigned int	src_r;

	j = 0;
	i = ft_strlen(dest);
	dest_r = ft_strlen(dest);
	src_r = ft_strlen(src);
	if (size < 1)
		return (size + src_r);
	while (src[j] != '\0' && (i < size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < dest_r)
		return (src_r + size);
	else
		return (dest_r + size);
}
