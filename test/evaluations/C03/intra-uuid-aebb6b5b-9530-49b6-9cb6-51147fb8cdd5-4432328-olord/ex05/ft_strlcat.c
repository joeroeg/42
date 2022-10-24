/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olord <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:51:15 by olord             #+#    #+#             */
/*   Updated: 2022/09/24 19:59:38 by olord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && (size - i - 1) > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0'
		return (i);
}
