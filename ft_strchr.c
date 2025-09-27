/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgumienn <mgumienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:42:02 by marvin            #+#    #+#             */
/*   Updated: 2025/09/24 19:37:13 by mgumienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c == 0)
		return ((char*)str + ft_strlen(str));
	char	*p;

	p = (char*) str;
	while (p)
	{
		if (*p == (char) c)
			return (p);
		p++;
	}
	return (0);
}


