# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 04:06:21 by kurosawaits       #+#    #+#              #
#    Updated: 2023/05/02 23:30:23 by kurosawaits      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	main.c												\
			push_swap.c											\
			check_argument.c									\
			./bidirectional_list/create_twolst.c				\
			./bidirectional_list/twolstadd_front_noguard.c		\
			./bidirectional_list/twolstadd_front_withguard.c	\
			./bidirectional_list/twolstadd_back_noguard.c		\
			./bidirectional_list/twolstadd_back_withguard.c		\
			./bidirectional_list/twolstnew.c					\
			./bidirectional_list/twolstlast.c					\
			./bidirectional_list/twolstdelone.c					\
			./bidirectional_list/twolstclear_noguard.c			\
			./bidirectional_list/twolstclear_withguard.c		\
			./bidirectional_list/twolstsize.c					\
			./operations/tohead.c								\
			./operations/swap.c									\
			./operations/push.c									\
			./operations/rotate.c								\
			./operations/reverse_rotate.c						\
			./arguments/two_arguments.c							\
			./arguments/three_arguments.c						\
			./arguments/four_arguments.c						\
			./arguments/five_arguments.c						\
			./arguments/six_arguments.c							\
			free_stack.c										\
			sort.c

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
