/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mickael.marcotte2004@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:25:01 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/16 11:37:31 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	write_digits(char digits[7])
{	
	int	index;

	index = 0;
	while (index < 7)
	{
		if (index == 0)
		{
			write(1, &digits[index], 1);
		}
		else if (digits[index] != '0' || digits[index - 1] > '0')
			write(1, &digits[index], 1);
		index++;
	}
}

void	create_table(char digits[7], int nb)
{
	int	index;

	index = 6;
	while (index >= 1)
	{
		digits[index] = (nb % 10) + '0';
		nb = nb / 10;
		index--;
	}
}

void	checker(int nb)
{
	char	digits[7];

	if (nb < 0)
	{
		digits[0] = '-';
		nb = nb * -1;
		create_table(digits, nb);
	}
	else
	{
		create_table(digits, nb);
	}
	write_digits(digits);
}

void	ft_putnbr(int nb)
{
	checker(nb);
}

int main(void)
{
    ft_putnbr(20);
}
