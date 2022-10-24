/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperron <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:22:50 by cperron           #+#    #+#             */
/*   Updated: 2022/09/22 22:00:54 by cperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_make_numb(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_loop(char a, char b, char c)
{
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
				c = b + 1;
			while (c <= 57)
			{
				ft_make_numb (a, b, c);
				if (a == 55 && b == 56 && c == 57)
				{
					break ;
				}
				write(1, ", ", 2);
					c++;
			}	
		b++;
		}
	a++;
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	b = '\0';
	c = '\0';
	ft_loop(a, b, c);
}
