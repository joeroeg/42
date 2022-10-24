/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbergero <pascaloubergeron@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:40:04 by pbergero          #+#    #+#             */
/*   Updated: 2022/09/25 15:46:08 by pbergero         ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != 0 || s2[i] != 0) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	to_find_length;
	int	check;	

	if (to_find[0] == 0)
		return (str);
	to_find_length = ft_strlen(to_find);
	i = 0;
	while (str[i] != 0)
	{
		check = ft_strncmp(&str[i], to_find, to_find_length - 1);
		if (check == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}
