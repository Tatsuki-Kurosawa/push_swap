/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:47:24 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/17 00:26:44 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate(t_twoway_list **list)
{
	t_twoway_list	*head_node;
	t_twoway_list	*next_node;
	t_twoway_list	*guard_node;
	t_twoway_list	*last_node;

	tohead(list);
	head_node = *list;
	next_node = head_node->next;
	guard_node = head_node->previous;
	last_node = guard_node->previous;
	guard_node->next = next_node;
	next_node->previous = guard_node;
	head_node->next = guard_node;
	guard_node->previous = head_node;
	head_node->previous = last_node;
	last_node->next = head_node;
	*list = next_node;
}

void	ra(t_twoway_list **list)
{
	rotate(list);
}

void	rb(t_twoway_list **list)
{
	rotate(list);
}

void	rr(t_twoway_list *list_a, t_twoway_list *list_b)
{
	rotate(list_a);
	rotate(list_b);
}
