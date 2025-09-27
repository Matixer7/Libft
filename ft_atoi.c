/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgumienn <mgumienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 15:58:35 by mgumienn          #+#    #+#             */
/*   Updated: 2025/09/24 19:32:46 by mgumienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	odd_or_even(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	return (j % 2);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] == '-' || str[i] == '+'
		|| (str[i] <= '\r' && str[i] >= '\t') || str[i] == ' ')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	if (odd_or_even(str) == 1)
		n = -n;
	return (n);
}