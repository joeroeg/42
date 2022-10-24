/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:54:33 by adube             #+#    #+#             */
/*   Updated: 2022/09/25 16:38:08 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	if (to_find[y] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + y] == to_find[y])
		{
			if (to_find[y + 1] == '\0')
				return (&str[i]);
			y++;
		}
		i++;
		y = 0;
	}
	return (0);
}
