/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:28:07 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/13 20:07:32 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);


// isalpha int	main(void){char c = '1'; printf("%d", ft_isalpha(c)); 	return (0); }
// isdigit int	main(void){char c = 'a'; printf("%d", ft_isdigit(c)); 	return (0); }
// isalnum int	main(void){char c = '!'; printf("%d", ft_isalnum(c)); 	return (0); }
// isascii int	main(void){char c = 'a'; printf("%d", ft_isascii(c)); 	return (0); }
// isprint int	main(void){char c = 'a'; printf("%d", ft_isprint(c)); 	return (0); }
// strlen int	main(void){char *str; int result; str = "Hello"; result = ft_strlen(str); printf ("%d", result); return (0); } 
// strcpy int	main(void){char str[50]; strcpy(str, "This is string.h library function"); puts(str); memset(str, '-', 7); puts(str); return (0); }
// memset int main (void){char str1[] = "Fuck hello ft_memset"; char str2[] = "Fuck hello ft_memset"; ft_memset (str1, '-', 5); puts (str1); memset (str2, '-', 5); puts (str2); return (0);}