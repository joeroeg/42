/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapelcha <rapelcha@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 08:59:09 by rapelcha          #+#    #+#             */
/*   Updated: 2022/10/01 11:41:15 by rapelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	len;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			len = ft_strlen(argv[i]);
			write (1, argv[i], len);
			write (1, "\n", 1);
			i++;
		}
	}
	return (0);
}
