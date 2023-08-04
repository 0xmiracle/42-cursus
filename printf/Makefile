# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/04 18:23:31 by ratwani           #+#    #+#              #
#    Updated: 2023/08/04 18:35:35 by ratwani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= cc
CFLAGS= -Wall -Wextra -Werror

NAME = libftprintf.a
SRCS = ft_printf.c \
       ft_printf_utils_s.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) 
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

