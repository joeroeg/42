/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 21:22:19 by mamartin          #+#    #+#             */
/*   Updated: 2022/11/22 18:34:41 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include "libasm.h"

int	main(int ac, char **av)
{
	int		sz;
	int		cmp;
	int 	ret;
	int		fd;
	char	*dest;	char	*dup;
	char	buffer[101];

	/* FT_STRLEN */
	printf("\033[32;01m""=== FT_STRLEN ===\n""\033[00m");
	sz = ft_strlen(av[1]);
	printf("length_src = %d\n", sz);
	sz = strlen(av[1]);
	printf("length_src = %d\n\n", sz);
	

	/* FT_STRCPY */
	printf("\033[32;01m""=== FT_STRCPY ===\n""\033[00m");
	dest = (char *)malloc(100);
	if (!dest)
		return (-1);
	dest = ft_strcpy(dest, av[1]);
	printf("copy_src = %s|\n", dest);
	memset(dest, '\0', 100);
	dest = strcpy(dest, av[1]);
	printf("copy_src = %s|\n\n", dest);

	/* FT_STRCMP */
	printf("\033[32;01m""=== FT_STRCMP ===\n""\033[00m");
	cmp = ft_strcmp(av[1], av[2]);
	printf("cmp = %d\n", cmp);
	cmp = strcmp(av[1], av[2]);
	printf("cmp = %d\n\n", cmp);

	/* FT_STRDUP */
	printf("\033[32;01m""=== FT_STRDUP ===\n""\033[00m");
	dup = ft_strdup(dest);
	printf("%s %p %p\n\n", dup, dup, dest);

	/* FT_WRITE */
	printf("\033[32;01m""=== FT_WRITE ===\n""\033[00m");
	ret = ft_write(1, dest, ft_strlen(dest));
	printf(" | %d\n", ret);
	ret = ft_write(1, dest, ft_strlen(dest));
	printf(" | %d\n\n", ret);

	/* FT_READ */
	printf("\033[32;01m""=== FT_READ ===\n""\033[00m");
	fd = open("Makefile", O_RDONLY);
	/* READ MAKEFILE */
	errno = 0;
	printf("\033[34;01m""read Makefile\n""\033[00m");
	ret = ft_read(fd, buffer, 100);
	buffer[ret] = '\0';
	printf("buffer = %s\n", buffer);
	printf("return = %d\n", ret);
	printf("errno = %d\n", errno);
	close(fd);
	/* READ STDIN */
	errno = 0;
	printf("\033[34;01m""read STDIN\n""\033[00m");
	ret = ft_read(0, buffer, 100);
	buffer[ret] = '\0';
	printf("buffer = %s\n", buffer);
	printf("return = %d\n", ret);
	printf("errno = %d\n", errno);

	return (0);
}