/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:27:41 by kurosawaits       #+#    #+#             */
/*   Updated: 2023/04/17 00:50:17 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	reverse_rotate(t_twoway_list **list)
{
	t_twoway_list	*head_node;
	t_twoway_list	*previous_node;
	t_twoway_list	*guard_node;
	t_twoway_list	*last_node;

	tohead(list);
	head_node = *list;
	last_node = twolstlast(head_node);
	guard_node = last_node->next;
	previous_node = last_node->previous;
	previous_node->next = guard_node;
	guard_node->previous = previous_node;
	guard_node->next = last_node;
	last_node->previous = guard_node;
	last_node->next = head_node;
	head_node->previous = last_node;
	*list = last_node;
}

void	rra(t_twoway_list **list)
{
	reverse_rotate(list);
}

void	rrb(t_twoway_list **list)
{
	reverse_rotate(list);
}

void	rrr(t_twoway_list **list_a, t_twoway_list **list_b)
{
	reverse_rotate(list_a);
	reverse_rotate(list_b);
}
