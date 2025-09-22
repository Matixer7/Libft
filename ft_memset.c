/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgumienn <mgumienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:46:47 by mgumienn          #+#    #+#             */
/*   Updated: 2025/09/22 16:16:27 by mgumienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, unsigned int c, unsigned int n)
{
	unsigned char	*p;

	p = ptr;
	while (n--)
		*p++ = (unsigned char) c;
	return (ptr);
}

