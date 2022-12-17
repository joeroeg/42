/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:34:32 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/04 04:30:40 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	maj;

	maj = 0;
	while (str[maj] != '\0')
	{
		if (str[maj] >= 'A' && str[maj] <= 'Z')
		{
			(str[maj] += 32);
		}
		maj++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] >= 0 && str[i - 1] <= 47)
				|| (str[i - 1] >= 58 && str[i - 1] <= 64)
				|| (str[i - 1] >= 91 && str[i - 1] <= 96)
				|| (str[i - 1] >= 123 && str[i - 1] <= 126))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
int main(void)
{
	char i[] = "Create a function that capitalizes the first letter of each word and transforms all other letters to lowercase.";
	printf("%s\n", ft_strcapitalize(i));
	return(0);
}