/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:59:09 by dpotvin           #+#    #+#             */
/*   Updated: 2022/09/22 12:50:33 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(char str)
{
	if (str > 31 && str < 127)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		if (ft_str_is_printable(c))
			ft_putchar();
		else
		{
			ft_putchar('\\');
			ft_putchar("0");
			ft_putchar("0123456789abcdef"[c % 16]);
		}
		i++;
	}
}
