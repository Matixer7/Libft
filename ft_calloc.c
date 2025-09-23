/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:27:35 by marvin            #+#    #+#             */
/*   Updated: 2025/09/23 13:27:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*calloc(unsigned int count, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (0);
	i = 0;
	while (i < (size * count))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}