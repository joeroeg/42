/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:16:26 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:36:33 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd) 
{
	long nb = n;
	if (nb < 0) 
  { 
		ft_putchar_fd('-', fd); 
		nb = nb * -1;
	}

	if (nb / 10 > 0) 
    ft_putnbr_fd(nb / 10, fd); 

	ft_putchar_fd((nb % 10 + '0'), fd);
}