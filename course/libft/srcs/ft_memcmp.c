/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:15:53 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:36:17 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
• memcmp is a function that compares two memory areas, and returns the absolute difference between them.
• The parameters required are two pointers to void, each pointing to the start of a different block of memory, and the size of the memory to compare.
• The return value is an integer representing the absolute difference between the two memory blocks.
• Features include comparing memory areas of different sizes, comparing both standard and non-standard data types, and allowing a comparison of two objects with the same type but different values.

Parameters: 
• Pointers to void: Two pointers pointing to the starting address of two different memory blocks.
• Size of memory to compare: An integer indicating the size of memory to compare.

Return value:
• if Return value < 0 then it indicates str1 is less than str2.
• if Return value > 0 then it indicates str2 is less than str1.
• if Return value = 0 then it indicates str1 is equal to str2.

Features: 
• Compares memory areas of different sizes.
• Compares standard and non-standard data types.
• Allows comparison of two objects with the same type but different values.

Tools and Techniques:
• Bitwise operations - these can be used to compare individual bits in the memory blocks.
• Pointer arithmetic - this can be used to navigate through the memory blocks during comparison.
• Array indexing - this can be used to access individual elements for comparison.

Alternative implementation:

int ft_memcmp (const void *str1, const void *str2, size_t count)
{
  register const unsigned char *s1 = (const unsigned char*)str1;
  register const unsigned char *s2 = (const unsigned char*)str2;

  while (count-- > 0)
    {
      if (*s1++ != *s2++)
	  return s1[-1] < s2[-1] ? -1 : 1;
    }
  return 0;
}

found solution on github library
- '?' symbol is known as the ternary operator in C, and it is used as a shorthand for an if-else statement. In this case, the ternary operator is used to check if the current character in the first memory block (s1[-1]) is lexically smaller than the current character in the second memory block (s2[-1]). If it is, then the function returns -1; otherwise, the function returns 1.
- register The 'register' keyword is used in this line of code to indicate that the variable 's1' should be stored in a register instead of in main memory. This can help improve performance, as register variables are typically accessed faster than variables stored in main memory.
*/

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while (n--)
    {
        if (*str1 != *str2)
            return (*str1 - *str2);
        str1++;
        str2++;
    }
    return (0);
}