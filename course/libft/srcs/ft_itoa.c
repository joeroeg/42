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

static int ft_digits(unsigned int n)
{
    if (n == 0) return 1;

    int result = 0;
    while (n != 0) 
	{
        n /= 10;
		++result;
    }
    return result;
}

char* ft_itoa(int n)
{
    int i = 0; 
    int sign = (n < 0) ? -1 : 1;
    int num_digits = ft_digits((unsigned int)(sign * n));
    
    char* str = malloc(num_digits +2);
    
    if (str == NULL) return NULL;
    str[num_digits + 1] = '\0';
	
	i = num_digits;
	while (i > 0)
	{
		str[i - 1] = (n % 10) + '0';
		n /= 10;
		i--;
	}

    if (sign < 0) str[0] = '-';
    return str;
}