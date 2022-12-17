/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:57:01 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/04 01:35:32 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	modulo;

	division = *a / *b;
	modulo = *a % *b;
	*a = division;
	*b = modulo;
}

int main()
{
int a = 26;
int b = 10;
ft_ultimate_div_mod(&a, &b);
printf("division: %d moduloL %d", a, b);
}