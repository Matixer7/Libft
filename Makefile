NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = libft.h ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_lower.c ft_toupper.c

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

.PHONY: clean fclean