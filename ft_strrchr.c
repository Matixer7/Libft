/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgumienn <mgumienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:55:56 by marvin            #+#    #+#             */
/*   Updated: 2025/09/24 19:42:02 by mgumienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, unsigned char c)
{
	int		i;
	char	*p;

	p = str;
	i = 0;
	while (p[i] != '\0')
		i++;
	i--;
	while (p[i] != c && i >= 0 && p[i])
		i--;
	p += i;
	return (p);
}

// int main(void)
// {
// 	char *str = "Fxind me I'm hexre";
// 	char c = 'x';
// 	str = ft_strrchr(str, c);
// 	return 0;
// }
