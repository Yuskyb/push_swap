# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yususato <yususato@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 20:28:35 by yususato          #+#    #+#              #
#    Updated: 2023/10/03 17:56:08 by yususato         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
INCLUDES_DIR = ./Includes
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES_DIR)

SRCS = push_swap.c \
		src/create/create.c \
		src/order/order_a.c
		

OBJS = $(SRCS:%.c=%.o)

LIBDIR = ./libft
LIBFT = $(LIBDIR)/libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBDIR)

clean:
	$(MAKE) fclean -C $(LIBDIR)
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIBFT)

re: fclean all

.PHONY: all clean fclean re