/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:32:37 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/04 04:12:41 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
char i[] = "0967410697";
printf("%d\n", ft_str_is_numeric(i));
return(0);
}

/* when we use (!( we are negating the expression in parentheses. So, in this case, we are checking to see if the character is not a number.*/