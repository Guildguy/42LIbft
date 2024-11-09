# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/31 00:47:50 by fleite-j          #+#    #+#              #
#    Updated: 2024/10/31 00:47:53 by fleite-j         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

FUNCTIONS = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen \
			ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat \
			ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr \
			ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr \
			ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri \
			ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

OBJ = $(addsuffix .o, $(FUNCTIONS))
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -I. -c -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
