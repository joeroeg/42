/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:38:47 by hzhukov           #+#    #+#             */
/*   Updated: 2022/09/28 00:02:58 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
	int	i;
	unsigned	char c;
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
