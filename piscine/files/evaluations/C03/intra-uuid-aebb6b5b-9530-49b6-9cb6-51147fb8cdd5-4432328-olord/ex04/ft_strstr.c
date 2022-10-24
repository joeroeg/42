/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olord <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:49:23 by olord             #+#    #+#             */
/*   Updated: 2022/09/23 22:52:05 by olord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{	
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{	
		j = 0;
		while (to_find[j] == str[i + j] && str[i + j])
		{	
			if (!(to_find[j +1]))
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}	
