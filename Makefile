NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

CC = cc

SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memset.c ft_strlen.c ft_memcmp.c  ft_memmove.c \
		ft_memchr.c ft_strlcpy.c ft_strlcat.c ft_tolower.c ft_toupper.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_atoi.c ft_strnstr.c \
		ft_calloc.c  ft_strdup.c


OBJS =  $(SRCS:.c=.o)

all: $(NAME)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: re
	make clean
	$(CC) $(CFLAGS) main.c libft.a -o test

testing:
	$(CC) $(CFLAGS) main.c libft.a -o test

.PHONY: all re clean fclean
