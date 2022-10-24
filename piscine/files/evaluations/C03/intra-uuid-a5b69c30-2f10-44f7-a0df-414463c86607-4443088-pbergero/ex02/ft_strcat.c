/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbergero <pascaloubergeron@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:36:07 by pbergero          #+#    #+#             */
/*   Updated: 2022/09/25 14:17:13 by pbergero         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlength;

	i = 0;
	destlength = ft_strlen(dest);
	while (src[i] != 0)
	{
		dest[i + destlength] = src[i];
		i++;
	}
	dest[i + destlength] = 0;
	return (dest);
}
