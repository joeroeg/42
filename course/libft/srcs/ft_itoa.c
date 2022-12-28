/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:15:45 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/27 18:37:27 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

static	size_t	ft_num_digits(unsigned int n)
{
	size_t	i;

	i = 1;
	if (n == 0)
		return (1);
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*ft_write_str(char *s, int i, int long n)
{
	if (i > 0)
		ft_write_str(s, i - 1, n / 10);
	s[i] = n % 10 + '0';
	return (s);
}

char	*ft_itoa(int n)
{
	long int	temp;
	char		*r;
	int			len;

	temp = n;
	len = ft_num_digits(temp);
	if (malloc(sizeof(char) * (len + 1)) == NULL)
	{
		return (NULL);
	}
	else
	{
		r = malloc(sizeof(char) * (len + 1));
	}
	if (n < 0)
	{
		temp = -temp;
		r[0] = '-';
	}
	ft_write_str(r, len - 1, temp);
	r[len] = '\0';
	return (r);
}

/* reverse:  reverse string s in place */
void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itoa(int n, char s[])
{
    int i, sign;

    sign = n;
    i = 0;
    do {        /* generate digits in reverse order */
        s[i++] = abs(n % 10) + '0';     /* get next digit */
    } while (n /= 10);                  /* delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

int	main(void)
{
	int	num1	= -1234;
	int	num2	= -1234;
	char	*str1 = ft_itoa(num1);
	char	*str2 = itoa(num2, 1);
	printf("String conversion of %d is %s\n", num1, str1);
	printf("String conversion of %d is %s\n", num2, str2);
	free(str1);
	free(str2);
	return (0);
}


