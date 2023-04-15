# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 04:06:21 by kurosawaits       #+#    #+#              #
#    Updated: 2023/04/16 02:05:25 by kurosawaits      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	push_swap.c			\
			twolstadd_back.c	\
			twolstnew.c			\
			check_argument.c	\
			twolstlast.c

OBJS	=	$(SRCS:.c=.o)

CC	=	gcc

CFLAGS	=	-Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
	make -C ./libft
	$(CC) $(CFLAGS) $(OBJS) -L ./libft -lft -o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME) ./libft/*.o ./libft/libft.a

re:	fclean all

.PHONY:	all clean fclean re
