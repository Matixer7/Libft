/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgumienn <mgumienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 19:13:55 by mgumienn          #+#    #+#             */
/*   Updated: 2025/09/25 19:28:59 by mgumienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int				ft_atoi(char *str);
void			*ft_bzero(void *ptr, size_t n);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(char c);
int				ft_isalpha(unsigned char c);
int				ft_isascii(int c);
int				ft_isdigit(unsigned char c);
int				ft_isprint(int c);
void			*ft_memchr(void *src, int search, size_t n);
int				ft_memcmp(void *s1, void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, void *src, unsigned int n);
void			*ft_memset(void *ptr, unsigned int c, size_t n);
char			*ft_strchr(const char *str, unsigned char c);
char			*ft_strdup(char *src);
size_t			ft_strlcat(char *dest, char *src, size_t size);
size_t			ft_strlcpy(char *dest, char *src, size_t size);
size_t			ft_strlen(const char *str);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(char *str, char *to_find, size_t n);
char			*ft_strrchr(char *str, unsigned char c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			ft_tolower(char c);
char			ft_toupper(char c);

#endif