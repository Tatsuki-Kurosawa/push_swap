/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:26:40 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/16 03:53:34 by kurosawaits      ###   ########.fr       */
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

t_twoway_list	*create_twolst(int quantity, char **numbers);
t_twoway_list	*twolstnew(int char_num, int guard_flag);
t_twoway_list	*twolstlast(t_twoway_list *node);
void			twolstadd_back(t_twoway_list **twolst, t_twoway_list *new);
void			twolstclear(t_twoway_list **twolst);
int				check_argument(int quantity, char **strs);
int				ft_atoi(const char *str);
int				ft_isdigit(int c);
size_t			ft_strlen(const char *s);

#endif