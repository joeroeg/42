/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:15:45 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/27 18:37:27 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_loop(int nb)
{
	int	pow;
	int	tmp;

	tmp = nb;
	pow = 0;
	if (nb == 0)
		pow++;
	while (tmp)
	{
		tmp = tmp / 10;
		pow++;
	}
	return (pow);
}

char	*ft_malloc(int pow, int mod)
{
	char	*str;

	str = (char *)malloc(pow + mod + 1);
	return (str);
}

char	*ft_fill(int nb, char *str, int pow)
{
	int		mod;

	mod = nb < 0;
	str[pow + mod] = 0;
	if (mod)
		*str++ = '-';
	else
		nb = -nb;
	while (pow--)
	{
		str[pow] = -(nb % 10) + '0';
		nb /= 10;
	}
	return (str - mod);
}

char	*ft_itoa(int nb)
{
	int		mod;
	int		pow;
	char	*str;

	mod = nb < 0;
	pow = ft_loop(nb);
	str = ft_malloc(pow, mod);
	if (!str)
		return (NULL);
	ft_fill(nb, str, pow);
	return (str);
}
