/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrolet- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:34:01 by odrolet-          #+#    #+#             */
/*   Updated: 2022/09/28 20:23:18 by odrolet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if((str[i] >= 65) && (str[i] <= 90))
			str[i] = str[i] + 32;
	i++;
	}
	return (str);
}
char    *ft_strcapitalize(char *str)
{
    int    i;

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
				str[i] = str[i] - 32;
			}
		}
	i++;
	}
	return (str);
}
int main()
{
	char str[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
	ft_strcapitalize(str);
	printf("%s", str);
}
