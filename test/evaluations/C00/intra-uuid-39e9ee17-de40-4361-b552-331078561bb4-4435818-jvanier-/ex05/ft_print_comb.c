/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanier- <jvanier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:52:40 by jvanier-          #+#    #+#             */
/*   Updated: 2022/09/25 12:47:43 by jvanier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include <unistd.h>

	    void ft_print_comb(void)//(char a, char b, char c)
    {
		if(a < '7')
		{
		    write(1, ", ", 2);
		}
        char a;
		char b;
		char c;
		
		a = '0';
		while(a <= '7')
		{
			b = a + 1;
			while(b <= '8')
			{
				c = b + 1;
				while(c <= '9')
				{
				 write(1, &a, 1);
				 write(1, &b, 1);
				 write(1, &c, 1);
					c++;
				}
			b++; 	
			}
		a++;	
		}
    }
int main()
{
    char a = 0;
    char b = 1;
    char c = 2;
    ft_print_comb(a, b, c);
    return (0);
}
