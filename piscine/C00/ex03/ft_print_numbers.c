/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:30:42 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/03 23:13:15 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{
	int	a;

	a = 48;
	while (a < 58)
	{
		write(1, &a, 1);
		a = a + 1;
	}
}
int main()
{
	ft_print_numbers();
	return (0);
}