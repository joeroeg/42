/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanier- <jvanier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:19:57 by jvanier-          #+#    #+#             */
/*   Updated: 2022/10/02 11:54:58 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	a++;
	return (str[a]);
}

int main(void)
{
	char str[] = "Hello";
	ft_strlen(str);
	printf("%s", str);
	return (0);
}
