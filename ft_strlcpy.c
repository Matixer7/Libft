/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgumienn <mgumienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:40:23 by mgumienn          #+#    #+#             */
/*   Updated: 2025/09/24 19:40:15 by mgumienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	src_size;

	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	if (size != 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_size);
}

/*int     main(void)
{
    #include <stdio.h>
    char    dest[10];
    char    *ptr = dest;

    ft_strlcpy(ptr, "Hello, world!", 10);
    printf("%s", dest);
    printf("%d", ft_strlcpy(ptr, "Hello, world!", 10));
}*/
