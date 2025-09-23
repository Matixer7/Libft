/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:36:30 by marvin            #+#    #+#             */
/*   Updated: 2025/09/23 12:36:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *src, int search, unsigned int n)
{
	unsigned char	*ptr;

	ptr = src;
	while (n--)
	{
		if (*ptr == (unsigned char) search)
			return(ptr);
		ptr++;
	}
	return (0);
}