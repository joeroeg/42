/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:18:40 by fgeslin           #+#    #+#             */
/*   Updated: 2022/09/22 17:48:01 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	set_state(char c, int state)
{
	if (c == ' ' && state <= 0)
		return (0);
	else if ((c == '+' || c == '-') && state <= 1)
		return (1);
	else if (c >= '0' && c <= '9' && state <= 2)
		return (2);
	else
		return (3);
}

int	ft_atoi(char *str)
{
	int	i;
	int	state;
	int	nbr;
	int	mult;

	i = 0;
	state = 0;
	nbr = 0;
	mult = 1;
	while (str[i] != '\0')
	{
		state = set_state(str[i], state);
		if (str[i] == '-' && state == 1)
			mult *= -1;
		else if (state == 2)
			nbr = nbr * 10 + str[i] - 48;
		else if (state == 3)
			return (nbr * mult);
		i++;
	}
	return (nbr * mult);
}
