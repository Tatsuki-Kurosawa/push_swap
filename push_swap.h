/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:26:40 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/18 12:09:20 by kurosawaits      ###   ########.fr       */
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
	struct twoway_list	*previous;
	int					content;
	int					guard;
}	t_twoway_list;

void			push_swap(int quantity, t_twoway_list **sa);
t_twoway_list	*create_twolst(int quantity, char **numbers);
t_twoway_list	*twolstnew(int char_num, int guard_flag);
t_twoway_list	*twolstlast(t_twoway_list *node);
void			twolstadd_front(t_twoway_list **head, t_twoway_list *new);
void			twolstadd_back(t_twoway_list **twolst, t_twoway_list *new);
void			twolstclear(t_twoway_list **twolst);
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
void			three_arguments(t_twoway_list **stack_a);
int				check_argument(int quantity, char **strs);
void			free_stack(t_twoway_list **stack);
int				ft_atoi(const char *str);
int				ft_isdigit(int c);
size_t			ft_strlen(const char *s);

#endif