/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epasquie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:32:59 by epasquie          #+#    #+#             */
/*   Updated: 2022/09/21 20:33:04 by epasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (nb);
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (ft_recursive_factorial (nb - 1) * nb);
}
