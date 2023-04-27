# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 04:06:21 by kurosawaits       #+#    #+#              #
#    Updated: 2023/04/27 16:41:39 by kurosawaits      ###   ########.fr        #
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
			./bidirectional_list/twolstdelone.c		\
			./bidirectional_list/twolstclear.c		\
			./operations/tohead.c					\
			./operations/swap.c						\
			./operations/push.c						\
			./operations/rotate.c					\
			./operations/reverse_rotate.c			\
			push_swap.c								\
			three_arguments.c						\
			four_arguments.c						\
			free_stack.c

OBJS	=	$(SRCS:.c=.o)

CC	=	gcc

# CFLAGS	=	-Wall -Wextra -Werror
CFLAGS	=	-Wall -Wextra -Werror -fsanitize=address

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
