/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:42:02 by marvin            #+#    #+#             */
/*   Updated: 2025/09/23 10:42:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, unsigned char c)
{
	char *p;

	p = str;
	while (*p != c && *p != '\0' && *p)
		p++;
	if (*p == c)
		return (p);
	return (str);
}

// int main(void)
// {
// 	char *str = "Find me I'm hexre";
// 	char c = 'x';
// 	str = ft_strchr(str, c);
// 	return 0;
// }
