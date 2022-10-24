/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 00:15:17 by hzhukov           #+#    #+#             */
/*   Updated: 2022/09/30 09:57:48 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	b = to_find;
	if (*b == 0)
		return (str);
	while (*str != 0)
	{
		if (*str != *b)
			str++;
		a = str;
		while (1)
		{
			if (*b == 0)
				return (str);
			if (*a++ != *b++)
			{
				str++;
				break ;
			}
		}
		b = to_find;
	}
	return (0);
}
