/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:17:30 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:37:29 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: The toupper() function converts a lowercase alphabet to an uppercase alphabet.
Prototype: int toupper(int ch);
Parameters: c - a character
Return value:
a lowercase character, the function returns its corresponding uppercase character
an uppercase character or a non-alphabetic character, the function the character itself

Example:
#include <stdio.h>
#include <ctype.h>
int main() {
    char c;

    c = 'm';
    printf("%c -> %c", c, toupper(c));

    c = 'D';
    printf("\n%c -> %c", c, toupper(c));

    c = '9';
    printf("\n%c -> %c", c, toupper(c));
    return 0;
}
Output: m -> M D -> D 9 -> 9

Extra information:
toupper is a built-in c++ library function which converts an individual character to upper case.
It is part of the <cctype> header file and takes a single argument.


The reason why bit 5 is used instead of 6 for toupper is because binary counting starts from 0, not 1. 
Therefore, the 5th number when starting at 0 (0b0100001) will be flipped to get 'A' in our example (0b0100001 -> 0b0100000).

When the bit numbering starts at zero for the least significant bit (LSB) the numbering scheme is called LSB 0.[1]
This bit numbering method has the advantage that for any unsigned number the value of the number can be calculated by using exponentiation with the bit number and a base of 2.

When the bit numbering starts at zero for the most significant bit (MSB) the numbering scheme is called MSB 0.

Example with bitwise:
int ft_toupper(int c) 
{ 
    if (c >= 'a' && c <= 'z') 
        return c & (~(1 << 5); 
    else 
        return c; 
}

*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
