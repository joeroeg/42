/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbergero <pascaloubergeron@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:56:40 by pbergero          #+#    #+#             */
/*   Updated: 2022/09/25 14:17:22 by pbergero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				destlength;

	i = 0;
	destlength = ft_strlen(dest);
	while (src[i] != 0 && size > 0)
	{
		dest[i + destlength] = src[i];
		i++;
		size--;
	}
	dest[i + destlength] = 0;
	return (dest);
}
