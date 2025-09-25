NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

OBJ = $(SRC:.c=.o)

TESTSRC = test_file.c
TESTOBJ = $(TESTSRC:.c=.o)
TESTBIN = test

all: $(NAME) test

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME) $(TESTOBJ)
	$(CC) $(CFLAGS) -o $(TESTBIN) $(TESTOBJ) $(NAME)

clean:
	rm -f $(OBJ) $(TESTBIN)

fclean: clean
	rm -f $(NAME) $(TESTBIN)

re: fclean all

.PHONY: clean fclean