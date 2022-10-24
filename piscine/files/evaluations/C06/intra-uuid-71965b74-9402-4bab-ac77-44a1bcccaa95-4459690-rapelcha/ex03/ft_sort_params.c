/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapelcha <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 07:19:28 by rapelcha          #+#    #+#             */
/*   Updated: 2022/09/28 08:30:52 by rapelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_write(int i, char **tab)
{
	int	len;

	while (tab[--i] && i > 0)
	{
		len = ft_strlen(tab[i]);
		write (1, tab[i], len);
		write (1, "\n", 1);
	}
}

void	sort_params(int nbr_param, char **tab)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < nbr_param)
	{
		j = i + 1;
		while (j < nbr_param)
		{
			if (ft_strcmp(tab[j], tab[i]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
	ft_write(i, tab);
}

int	main(int argc, char **argv)
{
	sort_params (argc, argv);
}
