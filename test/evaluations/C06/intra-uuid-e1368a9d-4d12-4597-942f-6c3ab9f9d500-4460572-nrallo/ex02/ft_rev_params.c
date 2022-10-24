/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:29:59 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/01 21:17:01 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, &*str, ft_strlen(str));
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	while (argc != 1)
	{
		ft_putstr(argv[argc - 1]);
		argc--;
	}
	return (0);
}
