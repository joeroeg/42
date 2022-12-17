/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:23:22 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/04 01:29:50 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a = 26;
	int b = 10;
	
	int div = 0;
	int mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("division: %d\n", div);
	printf("modular: %d\n", mod);
	return(0);
}