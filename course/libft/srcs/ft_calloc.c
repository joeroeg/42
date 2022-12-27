/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhukov <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:15:35 by hzhukov           #+#    #+#             */
/*   Updated: 2022/12/15 15:35:32 by hzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: 
- calloc is used for allocating memory dynamically. It is a combination of the words ‘contiguous allocation’ and ‘calloc’. 
- the function takes two parameters, the first being the number of elements to be allocated, and the second being the size of each element, in bytes. 
- the function initializes the allocated memory to zero. 


The calloc function is used for allocating memory for large arrays or structures. 
It is also used to allocate memory for any type of data that needs to be initialized to zero. 
The allocated memory must be freed after use, using the free() function. 
Additionally, calloc can be used to allocate a single block of memory for multiple objects of the same type. 
This is useful for creating structures like linked lists.

It is important to check the return value when using calloc to make sure the memory was allocated successfully. 
If the memory allocation fails, the return value will be NULL. 
Additionally, it is important to remember to free the allocated memory when it is no longer needed, to avoid memory leaks and other issues.

Parameters: 
- num  - number of objects
- size - size of each object


Features: 
- calloc ensures that all bits are set to 0, so no initialization is required
- allocated memory is contiguous
- calloc can be used to allocate memory for multi-dimensional arrays

Extra:
- Use malloc to allocate memory
- Use memset to set all bits to 0 
- Use realloc to resize the allocated memory if required
*/


void *ft_calloc(size_t num, size_t size)
{
    void* ptr = malloc(num * size);
    if (ptr)
	{
        ft_memset(ptr, 0, num * size);
    }
    return ptr;
}