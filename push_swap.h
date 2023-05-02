/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:26:40 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/05/02 23:35:16 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct twoway_list
{
	struct twoway_list	*next;
	int					content;
	int					guard;
	struct twoway_list	*previous;
}	t_twoway_list;

void			push_swap(int quantity, char **numbers, \
							t_twoway_list **stacka, t_twoway_list **stackb);
t_twoway_list	*create_twolst(int num_of_int, char **numbers);
t_twoway_list	*twolstnew(int char_num, int guard_flag);
t_twoway_list	*twolstlast(t_twoway_list *node);
void			twolstadd_front_noguard(t_twoway_list **head, \
											t_twoway_list *new);
void			twolstadd_front_withguard(t_twoway_list **head, \
											t_twoway_list *new);
void			twolstadd_back_noguard(t_twoway_list **twolst, \
										t_twoway_list *new);
void			twolstadd_back_withguard(t_twoway_list **head, \
										t_twoway_list *new);
void			twolstdelone(t_twoway_list *node);
void			twolstclear_noguard(t_twoway_list **twolst);
void			twolstclear_withguard(t_twoway_list **twolist);
int				twolstsize(t_twoway_list *twolist);
void			tohead(t_twoway_list **twolist);
void			sa(t_twoway_list **twolist);
void			sb(t_twoway_list **twolist);
void			ss(t_twoway_list **list_a, t_twoway_list **list_b);
void			pa(t_twoway_list **list_a, t_twoway_list **list_b);
void			pb(t_twoway_list **list_a, t_twoway_list **list_b);
void			ra(t_twoway_list **list);
void			rb(t_twoway_list **list);
void			rr(t_twoway_list **list_a, t_twoway_list **list_b);
void			rra(t_twoway_list **list);
void			rrb(t_twoway_list **list);
void			rrr(t_twoway_list **list_a, t_twoway_list **list_b);
void			two_arguments(t_twoway_list **stack);
void			three_arguments(t_twoway_list **stack_a);
void			four_arguments(t_twoway_list **stack_a, \
								t_twoway_list **stack_b);
void			five_arguments(t_twoway_list **stack_a, \
								t_twoway_list **stack_b);
void			six_arguments(t_twoway_list **stack_a, t_twoway_list **stack_b);
int				check_argument(int quantity, char **strs);
void			free_stack(t_twoway_list **stack);
void			number_sort(t_twoway_list **stacka, t_twoway_list **stackb);
int				ft_atoi(const char *str);
char			*ft_itoa(int n);
int				ft_isdigit(int c);
size_t			ft_strlen(const char *s);

#endif