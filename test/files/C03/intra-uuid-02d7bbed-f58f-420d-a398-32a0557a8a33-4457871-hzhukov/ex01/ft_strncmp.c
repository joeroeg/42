/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 23:18:24 by hzhukov           #+#    #+#             */
/*   Updated: 2022/10/03 12:53:50 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include	<stdio.h>
#include	<string.h>
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s2[i] == '\0' && s1[i] != '\0')
			return (1);
		else if (s1[i] == '\0' && s2[i] != '\0')
			return (-1);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] == '\0' && s1[i] == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char	s1[] = {"Hello b"};
	char	s2[] = {"Hello a"};
	printf("%d\n", strncmp(s1, s2, 7));
	printf("%d", ft_strncmp(s1, s2, 7));
	return 0;
} 
*/