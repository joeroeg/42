/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:20:29 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/04 01:17:03 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int main(void)
{
int nbr = 0;
int *nbr1 = &nbr;
int **nbr2 = &nbr1;
int ***nbr3 = &nbr2;
int ****nbr4 = &nbr3;
int *****nbr5 = &nbr4;
int ******nbr6 = &nbr5;
int *******nbr7 = &nbr6;
int ********nbr8 = &nbr7;
int *********nbr9 = &nbr8;
ft_ultimate_ft(&nbr8);
printf("%d", *********nbr9);
return (0);
}