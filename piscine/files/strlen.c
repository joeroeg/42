/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:43:23 by hzhukov           #+#    #+#             */
/*   Updated: 2022/09/26 20:02:04 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) > '\0') // we can use 2 different notation 1) str[i] - it means that we increment i up until we finish the while loop or we have 2) notation where we place * before and it means the same as 1) notation. Also it is the same as if I wrote i++; str++ which means that I want to identify amount of characters in my string.
	{
		i++;
	}
	return (i);
}



