/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:00:26 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/03 18:12:50 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	j = 0;
	}
	return (0);
}

int	main(void)
{
	char	s1[] = "World Hello World";
	char	s2[] = "Hello";

	char	*ret;

	ret = ft_strstr(s1, s2);
	printf("%s\n", ret);
	return (0);
}