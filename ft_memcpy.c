/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgumienn <mgumienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:02:00 by marvin            #+#    #+#             */
/*   Updated: 2025/09/24 16:20:25 by mgumienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*s;

	s = (unsigned char*) src;
	p = dest;
	while (n-- > 0)
		*p++ = *s++;
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main() {

//     // Initialize a variable
//     char b[] = "Hello";
//     char a[] = "XX";

//     printf("Value of b before calling memcpy: %d\n", b);

//     // Use memcpy to copy the value of 'a' into 'b'
//     ft_memcpy(&b, &a, 2); 

//     printf("Value of b after calling memcpy: %d\n", b);

//     return 0;
// }