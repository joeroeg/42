/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrank <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:49:41 by lfrank            #+#    #+#             */
/*   Updated: 2022/10/01 12:23:19 by lfrank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 0)
	{
		while (av[0][i] != '\0')
		{
			ft_putchar(aiv[0][i]);
			++i;
		}
	}
	ft_putchar('\n');
	return (0);
}
