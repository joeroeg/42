/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:15:34 by hzhukov           #+#    #+#             */
/*   Updated: 2022/09/21 21:31:37 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	char	digit[5];
	int		a;
	int		b;

	a = 0;
	digit[2] = ' ';
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			digit[0] = a / 10 + 48;
			digit[1] = a % 10 + 48;
			digit[3] = b / 10 + 48;
			digit[4] = b % 10 + 48;
			write(1, &digit, 5);
			if (a != 98 || b != 99)
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int main(void)
{
    ft_print_comb2();
    return (0)
}
