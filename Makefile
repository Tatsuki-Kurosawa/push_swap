# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 04:06:21 by kurosawaits       #+#    #+#              #
#    Updated: 2023/04/16 16:44:29 by kurosawaits      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	main.c									\
			check_argument.c						\
			./bidirectional_list/create_twolst.c	\
			./bidirectional_list/twolstadd_front.c	\
			./bidirectional_list/twolstadd_back.c	\
			./bidirectional_list/twolstnew.c		\
			./bidirectional_list/twolstlast.c		\
			./operations/tohead.c					\
			./operations/swap.c						\
			./operations/push.c

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
