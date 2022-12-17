/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:16:38 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/05 07:11:49 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print(int i)
{
	write(1, &i, 1);
}

void	ft_print_alphabet(void)

{
	int	a;

	a = 97;
	while (a < 123)
	{
		ft_print(a);
		a = a + 1;
	}
}

int main()
{
	ft_print_alphabet();
	return (0);
}