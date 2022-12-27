/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:15:45 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:36:12 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_digits(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = (n < 0) ? 2 : 1;
	while (n /= 10)
		i++;
	return (i);
}

static char	*ft_write_str(char *s, int i, int long n)
{
	if (i > 0)
		ft_write_str(s, i - 1, n / 10);	
	s[i] = n % 10 + '0';
	return (s);
}

char *ft_itoa(int n)
{
	long int	temp;
	char		*r;
	int			len;

	temp = n;
	len = ft_num_digits(temp);
	if (!(r = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n < 0)
	{
		temp = -temp;
		r[0] = '-';
	}
	ft_write_str(r, len - 1, temp);
	r[len] = '\0';
	return (r);
}