/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:02:01 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/06 23:42:07 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	while (nb > 0)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}

/*
int main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
}
*/