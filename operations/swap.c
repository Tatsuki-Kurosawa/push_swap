/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:34:12 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/16 16:47:14 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_twoway_list **twolist)
{
	t_twoway_list	*head;
	t_twoway_list	*next_node;
	int				buf;

	tohead(twolist);
	head = *twolist;
	next_node = head->next;
	buf = head->content;
	head->content = next_node->content;
	next_node->content = buf;
	
}

void	sa(t_twoway_list **twolist)
{
	swap(twolist);
}

void	sb(t_twoway_list **twolist)
{
	swap(twolist);
}

void	ss(t_twoway_list **list_a, t_twoway_list **list_b)
{
	swap(list_a);
	swap(list_b);
}
