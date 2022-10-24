/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboivin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:47:45 by fboivin           #+#    #+#             */
/*   Updated: 2022/09/25 15:38:46 by fboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	resulta;
	int	resultb;

	resulta = *a / *b;
	resultb = *a % *b;
	*a = resulta;
	*b = resultb;
}
