/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:26:40 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/15 04:32:02 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

typedef struct twoway_list
{
	struct twoway_list	*next;
	struct twoway_list	*previous;
	int					*content;
}	t_twoway_list;

t_twoway_list	*twolstnew(int *num);
t_twoway_list	*twolsthead(t_twoway_list *node);
void			twolstadd_front(t_twoway_list **twolst, t_twoway_list *new);
void			twolstadd_back(t_twoway_list **twolst, t_twoway_list *new);
void			*twolstclear(t_twoway_list **twolst);
int				ft_atoi(const char *str);

#endif