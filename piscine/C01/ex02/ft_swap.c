/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:48:13 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/04 01:21:58 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
int a = 5;
int b = 25;
printf("a = %d b = %d \n", a, b);
ft_swap(&a, &b);
printf("a = %d b = %d \n", a, b);
return (0);
}