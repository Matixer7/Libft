/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgumienn <mgumienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 19:13:55 by mgumienn          #+#    #+#             */
/*   Updated: 2025/09/23 19:44:26 by mgumienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft

#define libft

int				ft_atoi(char *str);
void			*ft_bzero(void *ptr, unsigned int n);
void			*calloc(unsigned int count, unsigned int size);
int				ft_isalnum(char c);
int				ft_isalpha(unsigned char c);
int				ft_isascii(char c);
int				ft_isdigit(unsigned char c);
int				ft_isprint(char c);
void			*ft_memchr(void *src, int search, unsigned int n);
int				ft_memcmp(void *s1, void *s2, unsigned int n);
void			*ft_memcpy(void *dest, void *src, unsigned int n);
void			*ft_memmove(void *dest, void *src, unsigned int n);
void			*ft_memset(void *ptr, unsigned int c, unsigned int n);
char			*ft_strchr(char *str, unsigned char c);
char			*ft_strdup(char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(char *str, char *to_find, unsigned int n);
char			*ft_strrchr(char *str, unsigned char c);
char			ft_tolower(char c);
char			ft_toupper (char c);



#endif libft