/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:34:06 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/04 04:27:54 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			(str[i] += 32);
		}
		i++;
	}
	return (str);
}
int main(void)
{
	char i[] = "CREATE A FUNCTION THAT TRANSFORMS EVERY LETTER TO LOWERCASE";
	printf("%s\n", ft_strlowcase(i));
	return(0);
}
