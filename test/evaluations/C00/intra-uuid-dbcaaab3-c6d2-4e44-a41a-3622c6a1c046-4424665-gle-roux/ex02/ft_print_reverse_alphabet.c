/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:51:37 by gle-roux          #+#    #+#             */
/*   Updated: 2022/09/17 15:09:55 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_print(int i)
{
	write(1, &i, 1);
}

void	ft_print_reverse_alphabet(void)

{
	int	z;

	z = 122;
	while (z > 96)
	{
		write(1, &z, 1);
		z = z - 1;
	}
}
int main()
{
    ft_print_reverse_alphabet();
}
