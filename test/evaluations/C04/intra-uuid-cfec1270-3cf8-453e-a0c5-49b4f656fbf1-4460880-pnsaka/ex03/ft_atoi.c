/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:09:40 by pnsaka            #+#    #+#             */
/*   Updated: 2022/10/02 16:49:40 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft_atoi(char *str)
{
	int	result;
	int	sign_negative;

	result = 0;
	sign_negative = 1;
	while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-')
		{
			sign_negative *= -1;
		}	
	i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * str[i] - '0';
		i++;
	}
}
