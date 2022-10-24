/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:18:40 by hzhukov           #+#    #+#             */
/*   Updated: 2022/09/21 12:42:04 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 

void	ft_write_num(int num[])
{
//	char	char_num_1;
//	char	char_num_2;
//	char	char_num_3;

//	char_num_1 = num[0] + 48;
//	char_num_2 = num[1] + 48;
//	char_num_3 = num[2] + 48;
	num[0] + 48;
	num[1] + 48;
	num[2] + 48;
	write(1, &num[0], 1);
	write(1, &num[1], 1);
	write(1, &num[2], 1);
	if (num[0] != 7)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	num[3];

	num[0] = 0;
	num[1] = 1; 
	num[2] = 2;
	while (num[0] <= 7) 
	{
		while (num[1] <= 8)
		{
			while (num[2] <= 9)
			{
				ft_write_num(num);
					num[2]++;
			}
			num[1]++;
			num[2] = num[1] + 1;
		}
		num[0]++;
		num[1] = num[0];
	}
}

int main(void)
{
	ft_print_comb();
	return (0);
}
