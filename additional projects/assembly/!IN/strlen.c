/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:21:24 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/08 22:13:06 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

/*
 * Portable strlen() for 32-bit and 64-bit systems.
 *
 * Rationale: it is generally much more efficient to do word length
 * operations and avoid branches on modern computer systems, as
 * compared to byte-length operations with a lot of branches.
 *
 * The expression:
 *
 *	((x - 0x01....01) & ~x & 0x80....80)
 *
 * would evaluate to a non-zero value iff any of the bytes in the
 * original word is zero.
 *
 * On multi-issue processors, we can divide the above expression into:
 *	a)  (x - 0x01....01)
 *	b) (~x & 0x80....80)
 *	c) a & b
 *
 * Where, a) and b) can be partially computed in parallel.
 *
 * The algorithm above is found on "Hacker's Delight" by
 * Henry S. Warren, Jr.
 */

/* Magic numbers for the algorithm */
#if LONG_BIT == 32
static const unsigned long mask01 = 0x01010101;
static const unsigned long mask80 = 0x80808080;
#elif LONG_BIT == 64
static const unsigned long mask01 = 0x0101010101010101;
static const unsigned long mask80 = 0x8080808080808080;
#else
#error Unsupported word size
#endif

#define	LONGPTR_MASK (sizeof(long) - 1)

/*
 * Helper macro to return string length if we caught the zero
 * byte.
 */
#define testbyte(x)				\
	do {					\
		if (p[x] == '\0')		\
		    return (p - str + x);	\
	} while (0)

size_t	strlen(const char *str)
{
	const char *p;
	const unsigned long *lp;
	long va, vb;

	/*
	 * Before trying the hard (unaligned byte-by-byte access) way
	 * to figure out whether there is a nul character, try to see
	 * if there is a nul character is within this accessible word
	 * first.
	 *
	 * p and (p & ~LONGPTR_MASK) must be equally accessible since
	 * they always fall in the same memory page, as long as page
	 * boundaries is integral multiple of word size.
	 */
	lp = (const unsigned long *)((uintptr_t)str & ~LONGPTR_MASK);
	va = (*lp - mask01);
	vb = ((~*lp) & mask80);
	lp++;
	if (va & vb)
		/* Check if we have \0 in the first part */
		for (p = str; p < (const char *)lp; p++)
			if (*p == '\0')
				return (p - str);

	/* Scan the rest of the string using word sized operation */
	for (; ; lp++) {
		va = (*lp - mask01);
		vb = ((~*lp) & mask80);
		if (va & vb) {
			p = (const char *)(lp);
			testbyte(0);
			testbyte(1);
			testbyte(2);
			testbyte(3);
#if (LONG_BIT >= 64)
			testbyte(4);
			testbyte(5);
			testbyte(6);
			testbyte(7);
#endif
		}
	}

	/* NOTREACHED */
	return (0);
}

int	main(void)
{
	char	*str;
	int	result;

	str = "Hello World";
	result = strlen(str);
	printf ("%d", result);
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:27:05 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/08 21:51:39 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	i++;
	return (i);
}